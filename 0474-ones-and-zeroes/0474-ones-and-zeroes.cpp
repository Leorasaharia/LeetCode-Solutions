class Solution {
public:
    int findMaxForm(vector<string>& strs, int m, int n) {
        int a=strs.size();
        int b=strs[0].size();
        int dp[101][101]={};
        for(int i=0;i<a;i++){
            int z=0,o=0;
            int c=strs[i].size();
            for(int j=0;j<c;j++){
                if(strs[i][j]=='0'){
                    z++;
                }
                else{
                    o++;
                }
            }
            for(int x=m;x>=z;x--){
                for(int y=n;y>=o;y--){
                    if(dp[x-z][y-o]+1 > dp[x][y])
                        dp[x][y]=dp[x-z][y-o]+1;
                }
            }
        }
        return dp[m][n];
    }
};
