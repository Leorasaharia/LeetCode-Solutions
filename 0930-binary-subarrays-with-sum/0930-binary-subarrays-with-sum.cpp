class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int n=nums.size();
        int cnt=0;
        vector<int>dp(n+1,0);
        dp[0]=1; 
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            if(sum>=goal){
                cnt+=dp[sum-goal];
            }
            dp[sum]++;
        }
        return cnt;
    }
};