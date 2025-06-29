class Solution {
public:
    int findMaxLength(vector<int>&nums) {
        int n=nums.size();
        int ans=0;
        int sum=0;
        unordered_map<int,int>m;
        m[0]=-1;
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                nums[i]=-1;
            }
        }
        for(int i=0;i<n;i++){
            sum+=nums[i];
            if(m.count(sum)){
                int len=i-m[sum];
                if(len>ans){
                    ans=len;
                }
            }else{
                m[sum]=i;
            }
        }
        return ans;
    }
};
