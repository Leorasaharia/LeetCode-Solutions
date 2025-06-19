class Solution {
public:
    int partitionArray(vector<int>&nums,int k){
        sort(nums.begin(),nums.end());
        int beg=0,cnt=1;
        for(int end=1;end<nums.size();end++){
            if(nums[end]-nums[beg]>k){
                cnt++;
                beg=end;
            }
        }
        return cnt;
    }
};
