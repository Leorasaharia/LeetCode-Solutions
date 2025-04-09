class Solution {
public:
    int search(vector<int>& nums, int target) {
        int beg=0;
        int end=nums.size()-1;
        long long mid;
        while(beg<=end){
            mid=beg;
            while(2*mid<beg+end){
                mid++;
            }
            if(nums[mid]-target==0){
                return mid;
            }
            if(nums[mid]-target<0){
                beg=mid+1;
            }
            else{
                end=mid-1;
            }
        }
        return -1;
    }
};
