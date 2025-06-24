class Solution {
public:
    int maximalSquare(vector<vector<char>>&matrix) {
        int m=matrix.size();
        if(m==0){
            return 0;
        }
        int n=matrix[0].size();
        int maxx=0;
        vector<vector<int>>dp(m,vector<int>(n,-1));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j]=='1'){
                    if(dp[i][j]!=-1){
                        if(dp[i][j]>maxx){
                            maxx=dp[i][j];
                        }
                        continue;
                    }
                    int len=1;
                    bool res=1;
                    while(i+len<m && j+len<n && res){
                        for(int x=i;x<=i+len;x++){
                            int dx=x;
                            int dy=j+len;
                            if(matrix[dx][dy]!='1'){
                                res=0;
                                break;
                            }
                        }
                        for(int y=j;y<=j+len;y++){
                            int dx=i+len;
                            int dy=y;
                            if(matrix[dx][dy]!='1'){
                                res=0;
                                break;
                            }
                        }
                        if(res!=0){
                            len++;
                        }
                    }
                    dp[i][j]=len;
                    if(len>maxx){
                        maxx=len;
                    }
                }
            }
        }
        return maxx*maxx;
    }
};
