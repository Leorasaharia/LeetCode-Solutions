class Solution {
public:
    int maximizeGreatness(vector<int>& nums) {
        int n=nums.size();
        int res=0;
        sort(nums.begin(),nums.end());
        int i=0;
        for(int k=1;k<n;k++){
            if(nums[i]<nums[k]){
                res++;
                i++;
            }
        }
        return res;
    }
};