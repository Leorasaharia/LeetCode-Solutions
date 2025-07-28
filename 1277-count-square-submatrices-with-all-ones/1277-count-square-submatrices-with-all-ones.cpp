class Solution {
public:
    int countSquares(vector<vector<int>>&matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        int ans=0;
        vector<pair<int,int>>dir={{1,0},{0,1},{1,1}};
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j]==1){
                    ans++;
                    int l=1;
                    while(i+l<n && j+l<m){
                        bool res=1;
                        for(int x=0;x<=l;x++){
                            if(matrix[i+l][j+x]==0 || matrix[i+x][j+l]==0){
                                res=0;
                                break;
                            }
                        }
                        if(res && matrix[i+l][j+l]==1){
                            ans++;
                            l++;
                        }else{
                            break;
                        }
                    }
                }
            }
        }
        return ans;
    }
};
