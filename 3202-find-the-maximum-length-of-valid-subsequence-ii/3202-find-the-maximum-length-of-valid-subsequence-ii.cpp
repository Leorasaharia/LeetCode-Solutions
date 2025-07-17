class Solution {
public:
    int maximumLength(vector<int>& nums, int k) {
        int n=nums.size();
        int ans=1;
        for(int i=0;i<n;++i){
            for(int j=i+1;j<n;++j){
                int v=(nums[i]+nums[j])%k;
                int cnt=2,prev=nums[j];
                for(int l=j+1;l<n;++l){
                    if((prev+nums[l])%k==v){
                        cnt++;
                        prev=nums[l];
                    }
                }
                if(cnt>ans){
                    ans=cnt;
                }
            }
        }
        return ans;
    }
};
