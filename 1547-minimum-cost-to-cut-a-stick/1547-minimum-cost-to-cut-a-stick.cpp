class Solution {
public:
    int minCost(int n, vector<int>& cuts) {
        cuts.push_back(0);
        cuts.push_back(n);
        sort(cuts.begin(),cuts.end());
        int c=cuts.size();
        vector<vector<int>> dp(c,vector<int>(c,0));
        for(int l=2;l<c;l++){
            for(int i=0;i+l<c;i++){
                int j=i+l;
                dp[i][j]=1e9;
                for(int k=i+1;k<j;k++){
                    int cost=cuts[j]-cuts[i]+dp[i][k]+dp[k][j];
                    if(cost<dp[i][j]){
                        dp[i][j]=cost;
                    }
                }
            }
        }
        return dp[0][c-1];
    }
};
