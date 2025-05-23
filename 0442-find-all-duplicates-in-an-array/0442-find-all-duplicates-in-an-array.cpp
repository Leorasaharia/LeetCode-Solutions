class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
    int n=nums.size();
        vector<int> res;
        for(int i=0;i<n;i++){
            int x=abs(nums[i]);
            if(nums[x-1]<0){
                res.push_back(x);
            }
            else{
                nums[x-1]*=-1;
            }
        }
        return res;
    }
};
