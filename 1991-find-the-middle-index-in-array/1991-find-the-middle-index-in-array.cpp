class Solution {
public:
    int findMiddleIndex(std::vector<int>& nums) {
        if(nums.size()<1) {
            return -1;
        }
        int sum=0;
        for(int num:nums) {
            sum+=num;
        }
        int left=0;
        for(int i=0;i<nums.size();i++) {
            int right=sum-left-nums[i];
            if(left==right) {
                return i;
            }
            left+=nums[i];
        }
        return -1;
    }
};