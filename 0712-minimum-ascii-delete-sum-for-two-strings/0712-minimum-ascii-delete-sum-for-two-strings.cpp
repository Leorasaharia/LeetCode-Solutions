class Solution{
public:
    int minimumDeleteSum(string s1,string s2){
        int n=s1.size();
        int m=s2.size();
        int dp[1001][1001];
        dp[n][m]=0;
        for(int i=n-1;i>=0;i--){
            dp[i][m]=s1[i]+dp[i+1][m];
        }
        for(int j=m-1;j>=0;j--){
            dp[n][j]=s2[j]+dp[n][j+1];
        }
        for(int i=n-1;i>=0;i--){
            for(int j=m-1;j>=0;j--){
                if(s1[i]==s2[j]){
                    dp[i][j]=dp[i+1][j+1];
                }
                else{
                    dp[i][j]=min(s1[i]+dp[i+1][j],s2[j]+dp[i][j+1]);
                }
            }
        }
        return dp[0][0];
    }
};
