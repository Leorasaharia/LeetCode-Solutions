class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int n=nums.size();
        int ans=-1; //return -1 if i, j doesnt exist
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(nums[j]>nums[i]){
                    int diff=nums[j]-nums[i];
                    if(diff>ans){
                        ans=diff;
                    }
                }
            }
        }
        return ans;
    }
};
