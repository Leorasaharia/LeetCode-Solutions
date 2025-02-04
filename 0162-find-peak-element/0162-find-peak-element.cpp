class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int beg=0;
        int end=nums.size()-1;
        while(beg<end){
            int mid=beg+(end-beg)/2;
            if(nums[mid]>nums[mid+1]){
                end=mid;
            }else{
                
                beg=mid+1;
            }
            
        }
        return beg;
    }
};