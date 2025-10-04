class Solution {
public:
    int minHeightShelves(vector<vector<int>>& books,int shelfWidth){
        int n=books.size();
        vector<int>dp(n+1,1e9);
        dp[0]=0;
        for(int i=1;i<=n;i++){
            int w=0;
            int h=0;
            for(int j=i-1;j>=0;j--){
                w=books[j][0]+w;
                if(w>shelfWidth){
                    break;
                }
                h=max(h,books[j][1]);
                dp[i]=min(dp[i],dp[j]+h);
            }
        }
        return dp[n];
    }
};
