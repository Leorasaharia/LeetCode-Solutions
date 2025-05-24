class Solution {
public:
    bool canPartition(vector<int>&a) {
        int n=a.size();
        int s=0;
        for(int i=0;i<n;i++){
            s+=a[i];
        }
        if(s%2){
            return false;
        }
        int t=s/2;
        vector<vector<bool>>dp(n+1,vector<bool>(t+1,false));
        for(int i=0;i<=n;i++){
            dp[i][0]=true;
        }
        for(int i=1;i<=n;i++){
            for(int j=1;j<=t;j++){
                if(j<a[i-1]){
                    dp[i][j]=dp[i-1][j];
                }
                else{
                    dp[i][j] = dp[i-1][j] || dp[i-1][j-a[i-1]];
                }
            }
        }
        return dp[n][t];
    }
};
