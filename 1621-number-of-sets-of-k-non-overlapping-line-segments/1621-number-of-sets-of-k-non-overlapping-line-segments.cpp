class Solution {
public:
    int numberOfSets(int n,int k) {
        int mod=1e9+7;
        int dp[1001][1001]={};
        dp[1][1]=1;
        for(int i=2;i<n;i++){
            dp[i][1]=(i+1)*i/2;
        }
        for(int i=2;i<n;i++){
            for(int j=2;j<=k;j++){
                for(int p=i-1;p>=j-1;p--){
                    dp[i][j]=(dp[i][j]+dp[p][j-1])%mod;
                }
                dp[i][j]=(dp[i][j]+dp[i-1][j])%mod;
            }
        }
        return dp[n-1][k];
    }
};
