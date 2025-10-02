class Solution {
public:
    int numSquares(int n){
        vector<int> dp(n+1,INT_MAX);
        dp[0]=0;// base case
        for(int x=1;x<=n;x++){
            int limit=sqrt(x);// max square we can use
            for(int k=1;k<=limit;k++){
                int sq=k*k;
                dp[x]=min(dp[x],dp[x-sq]+1);
            }
        }
        return dp[n];
    }
};