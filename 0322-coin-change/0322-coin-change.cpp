class Solution {
public:
    int coinChange(vector<int>& coins, int amt) {
        sort(coins.begin(),coins.end(),greater<int>());
        vector<int> dp(amt+1,INT_MAX);
        dp[0]=0;
        for(int i=1;i<=amt;++i){
            for(int c:coins){
                if(i>=c && dp[i-c]!=INT_MAX){
                    dp[i]=min(dp[i],dp[i-c]+1);
                }
            }
        }
        return dp[amt]==INT_MAX?-1:dp[amt];
    }
};

//bottom up 