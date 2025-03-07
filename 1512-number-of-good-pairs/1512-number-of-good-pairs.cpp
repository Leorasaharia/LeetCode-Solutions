class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int cnt[101]={};
        int res=0;
        for(int i=0;i<nums.size();i++){
            res+=cnt[nums[i]]++;
        }
        return res;
    }
};
