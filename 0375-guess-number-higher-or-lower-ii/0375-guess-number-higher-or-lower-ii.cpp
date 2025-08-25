class Solution{
public:
    int getMoneyAmount(int n){
        vector<vector<int>> dp(n+2,vector<int>(n+2,0));
        for(int len=2;len<=n;len++){
            for(int l=1;l+len-1<=n;l++){
                int r=l+len-1;
                dp[l][r]=1e9;
                for(int j=l;j<=r;j++){
                    int left=0;
                    int right=0;
                    if(l<=j-1){
                        left=dp[l][j-1];
                    }
                    if(j+1<=r){
                        right=dp[j+1][r];
                    }
                    int cost=j+max(left,right);
                    if(cost<dp[l][r]){
                        dp[l][r]=cost;
                    }
                }
            }
        }
        return dp[1][n];
    }
};
