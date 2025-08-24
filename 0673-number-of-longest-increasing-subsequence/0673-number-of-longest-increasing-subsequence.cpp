class Solution {
public:
    int findNumberOfLIS(vector<int>& nums) {
        int n=nums.size();
        vector<int> res(n,1); //each element is an lis of length 1
        vector<int> cnt(n,1); //cntof lis ending at each element
        int mx=1; //maxm lenght of the list
        int ans=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<i;j++){
                if(nums[i]>nums[j]){
                    if(res[j]+1>res[i]){
                        res[i]=res[j]+1;
                        cnt[i]=cnt[j];
                    }else if(res[j]+1==res[i]){
                        cnt[i]+=cnt[j];
                    }
                }
            }
            mx=max(mx,res[i]);
        }
        for(int i=0;i<n;i++){
            if(res[i]==mx){
                ans+=cnt[i];
            }
        }
        return ans;
    }
};
