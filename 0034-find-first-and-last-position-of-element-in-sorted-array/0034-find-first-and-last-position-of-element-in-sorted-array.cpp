class Solution {
public:
    vector<int> searchRange(vector<int>& nums,int val) {
        int n=nums.size();
        vector<int> res(2,-1);
        int beg=0,end=n-1;
        while(beg<=end){
            int mid=beg+(end-beg)/2;
            if(nums[mid]<val){
                beg=mid+1;
            }else{
                end=mid-1;
            }
        }
        if(beg<n&&nums[beg]==val){
            res[0]=beg;
        }else{
            return res;
        }end=n-1;
        while(beg<=end){
            int mid=beg+(end-beg)/2;
            if(nums[mid]<=val){
                beg=mid+1;
            }else{
                end=mid-1;
            }
        }res[1]=end;
        return res;
    }
};
