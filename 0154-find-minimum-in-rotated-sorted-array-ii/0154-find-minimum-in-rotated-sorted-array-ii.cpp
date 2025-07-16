class Solution {
public:
    int findMin(vector<int>& nums) {
        int beg=0;
        int end=nums.size()-1;
        while(beg<=end){
            int mid=beg+(end-beg)/2;
            if(nums[mid]>nums[end]){
                beg=mid+1;
            }else if(nums[mid]<nums[end]){
                    end=mid;
            }else{
                end--;
            }
        }
        return nums[beg];
    }
};