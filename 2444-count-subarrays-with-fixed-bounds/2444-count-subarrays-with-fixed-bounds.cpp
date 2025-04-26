class Solution {
public:
    long long countSubarrays(vector<int>& nums,int minK,int maxK){
        long long ans=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            int mn=nums[i],mx=nums[i];
            for(int j=i;j<n;j++){
                mn=min(mn,nums[j]);
                mx=max(mx,nums[j]);
                if(mn==minK&&mx==maxK)ans++;
            }
        }
        return ans;
    }
};
