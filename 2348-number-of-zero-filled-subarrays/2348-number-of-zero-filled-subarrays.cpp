class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long ans=0;
        long long len=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                len++;
            }
            else{
                if(len>0){
                    ans+=(len*(len+1))/2;
                    len=0;
                }
            }
        }
        if(len>0){
            ans+=(len*(len+1))/2;
        }
        return ans;
    }
};
