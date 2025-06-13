class Solution{
public:
    int minFallingPathSum(vector<vector<int>>&matrix){
        int n=matrix.size();
        int m=matrix[0].size();
        vector<int>prev(m),cur(m);
        for(int j=0;j<m;j++){
            prev[j]=matrix[0][j];
        }
        for(int i=1;i<n;i++){
            for(int j=0;j<m;j++){
                int up=matrix[i][j]+prev[j];
                int ld,rd;
                if(j-1>=0){
                    ld=matrix[i][j]+prev[j-1];
                }
                else{
                    ld=matrix[i][j]+1e9;
                }
                if(j+1<m){
                    rd=matrix[i][j]+prev[j+1];
                }
                else{
                    rd=matrix[i][j]+1e9;
                }
                int mn=up;
                if(ld<mn){
                    mn=ld;
                }
                if(rd<mn){
                    mn=rd;
                }
                cur[j]=mn;
            }
            for(int j=0;j<m;j++){
                prev[j]=cur[j];
            }
        }
        int ans=prev[0];
        for(int j=1;j<m;j++){
            if(prev[j]<ans){
                ans=prev[j];
            }
        }
        return ans;
    }
};
