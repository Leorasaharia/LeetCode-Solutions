class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums){
        int l=0,sm=0,length=INT_MAX;
        for(int r=0;r<nums.size();++r){
            sm+=nums[r];
            while(sm>=target){
                length=min(length,r-l+1);
                sm-=nums[l];
                l++;
            }
        }
        return length==INT_MAX?0:length;
    }
};