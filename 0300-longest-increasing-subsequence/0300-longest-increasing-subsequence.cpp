class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
        vector<long long> dp(n,1);
        for(long i=0;i<n;++i){
            for(long j=0;j<i;++j){
                if(nums[i]>nums[j] &&dp[i]<dp[j]+1){
                    dp[i]=dp[j]+ 1;
                }
            }
        }
        return *max_element(dp.begin(),dp.end());
    }
};