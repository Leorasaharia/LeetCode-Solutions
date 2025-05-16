class Solution {
public:
    int maxProfit(int k, vector<int>& prices) {
        int n=prices.size();
        if(n==0 ||  k==0){
            return 0;
        }
        if(k>=n/2){
            int prof=0;
            for(int i=1;i<n;++i){
                if(prices[i]>prices[i-1]){
                    prof+=prices[i]-prices[i-1];
                }
            }
            return prof;
        }
        vector<vector<int>> dp(k+1,vector<int>(n,0));
        for(int t=1;t<=k;++t){
            int diff=-prices[0];
            for(int i=1;i<n;++i){
                dp[t][i]=max(dp[t][i-1],prices[i]+diff);
                diff=max(diff,dp[t-1][i]-prices[i]);
            }
        }
        return dp[k][n-1];
    }
};
