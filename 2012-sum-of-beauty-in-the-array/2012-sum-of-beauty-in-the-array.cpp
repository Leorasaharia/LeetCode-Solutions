class Solution {
public:
    int sumOfBeauties(vector<int>&nums){
        int n=nums.size();
        int ans=0;
        vector<int> pre(n),suf(n);
        pre[0]=nums[0];
        for(int i=1;i<n;i++){
            pre[i]=max(pre[i-1],nums[i]);
        }
        suf[n-1]=nums[n-1];
        for(int i=n-2;i>=0;i--){
            suf[i]=min(suf[i+1],nums[i]);
        }
        for(int i=1;i<n-1;i++){
            if(pre[i-1]<nums[i] && nums[i]<suf[i+1]){
                ans=ans+2;
            }
            else if(nums[i]>nums[i-1] && nums[i]<nums[i+1]){
                ans=ans+1;
            }
        }
        return ans;
    }
};
