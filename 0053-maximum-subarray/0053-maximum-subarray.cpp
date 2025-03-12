class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        if(nums.size()==0)
           return 0;
           int sm_max=nums[0];
           int sum_curr=nums[0];
           for (int i=1;i<nums.size();++i){
            int n=nums[i];
            sum_curr=max(sum_curr+n,n);
            sm_max=max(sm_max,sum_curr);
           }
        return sm_max;
    }
};