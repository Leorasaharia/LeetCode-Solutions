class Solution {
public:
    int findLongestChain(vector<vector<int>>& pairs) {
        int n=pairs.size();
        sort(pairs.begin(), pairs.end());
        vector<int> dp(n,1);
        for(int i=1;i<n;++i){
            auto p2=pairs[i];
            int c=p2[0];
            int d=p2[1];

            for(int j=0;j<i;++j){
                auto p1=pairs[j];
                int a=p1[0];
                int b=p1[1];
                
                if(b<c){
                    dp[i]=max(dp[i],dp[j]+1);
                }
            }
        }
        return *max_element(dp.begin(),dp.end());
    }
};
