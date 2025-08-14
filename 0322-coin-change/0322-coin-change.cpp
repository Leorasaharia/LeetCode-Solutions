class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        int n=coins.size();
        //sort(coins.begin(),coins.end();
        vector<int> dp(amount+1, INT_MAX);
        dp[0]=0;
        for(int i=0;i<n;i++){
            for(int j=coins[i];j<=amount;j++){
                if(dp[j-coins[i]]!=INT_MAX){
                    dp[j]=min(dp[j],dp[j-coins[i]]+1);
                }
            }
        }
        if(dp[amount]<=1e9){
            return -1;
        }
        return dp[amount];
    }
};
