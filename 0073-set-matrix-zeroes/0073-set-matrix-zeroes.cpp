class Solution {
public:
    void setZeroes(vector<vector<int>>& a){
        int m=a.size();
        int n=a[0].size();
        bool r=false,c=false;
        for(int i=0;i<m;i++){
            if(a[i][0]==0){
                c=true;
            }
        }
        for(int j=0;j<n;j++){
            if(a[0][j]==0){
                r=true;
            }
        }
        for(int i=1;i<m;i++){
            for(int j=1;j<n;j++){
                if(a[i][j]==0){
                    a[i][0]=a[0][j]=0;
                }
            }
        }
        for(int i=1;i<m;i++){
            for(int j=1;j<n;j++){
                if(a[i][0]==0||a[0][j]==0){
                    a[i][j]=0;
                }
            }
        }
        if(c){
            for(int i=0;i<m;i++){
                a[i][0]=0;
            }
        }
        if(r){
            for(int j=0;j<n;j++){
                a[0][j]=0;
            }
        }
    }
};
