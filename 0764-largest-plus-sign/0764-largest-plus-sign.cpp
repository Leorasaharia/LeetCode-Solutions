class Solution {
public:
    int orderOfLargestPlusSign(int n, vector<vector<int>>& mines) {
        vector<vector<int>> dp(n,vector<int>(n,n));
        for(int i=0;i<mines.size();i++) {
            int x=mines[i][0];
            int y=mines[i][1];
            dp[x][y]=0;
        }
        for(int i=0;i<n;i++){
            int cnt=0;
            for(int j=0;j<n;j++){
                if(dp[i][j]==0){
                    cnt=0;
                }
                else{
                    cnt++;
                    dp[i][j]=cnt;
                }
            }
            cnt=0;
            for(int j=n-1;j>=0;j--){
                if(dp[i][j]==0){
                    cnt=0;
                }
                else{
                    cnt++;
                    if(dp[i][j]>cnt){
                        dp[i][j]=cnt;
                    }
                }
            }
        }
        for(int j=0;j<n;j++){
            int cnt=0;
            for(int i=0;i<n;i++){
                if(dp[i][j]==0){
                    cnt=0;
                }
                else{
                    cnt++;
                    if(dp[i][j]>cnt){
                        dp[i][j]=cnt;
                    }
                }
            }
            cnt=0;
            for(int i=n-1;i>=0;i--){
                if(dp[i][j]==0)
                {
                    cnt=0;
                }
                else{
                    cnt++;
                    if(dp[i][j]>cnt){
                        dp[i][j]=cnt;
                    }
                }
            }
        }
        int mx=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(dp[i][j]>mx){
                    mx=dp[i][j];
                }
            }
        }
        return mx;
    }
};
