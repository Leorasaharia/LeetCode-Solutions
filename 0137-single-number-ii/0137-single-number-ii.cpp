class Solution {
public:
    int singleNumber(vector<int>& nums){
        int n=nums.size();
        for(int i=0;i<n;++i){
            bool found=false;
            for(int j=0;j<n;++j){
                if(i!=j && nums[i]==nums[j]){
                    found=true;
                    break;
                }
            }
            if(!found){
                return nums[i];
            }
        }
        return -1;
    }
};