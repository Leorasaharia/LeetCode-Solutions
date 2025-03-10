class Solution {
public:
    int singleNonDuplicate(vector<int>&nums) {
        int r=nums.size()-1;
        int l=0;
        while(l<r){
            int m=l+(r-l)/2;
            if(m%2==1){
                m--;
            }
            if(nums[m]==nums[m+1]){
                l=m+2;
            }
            else{
                r=m;
            }
        }
        return nums[l];
    }
};
