class Solution {
public:
    bool splitArraySameAverage(vector<int>&nums) {
        int n=nums.size();
        int tot=0;
        for(int i=0;i<n;++i){
            tot+=nums[i];
        }
        sort(nums.begin(),nums.end());
        bool pos=false;
        for(int k=1;k<=n/2;++k){
            if((tot*k)%n==0){
                pos=true;
                break;
            }
        }
        if(!pos){
            return false;
        }
        vector<unordered_set<int>>dp(n+1);
        dp[0].insert(0);
        for(int num:nums){
            for(int i=n-1;i>=0;--i){
                for(int x:dp[i]){
                    dp[i+1].insert(x+num);
                }
            }
        }
        for(int k=1;k<=n/2;++k){
            if((tot*k)%n!=0){
                continue;
            }
            int target=(tot*k)/n;
            if(dp[k].count(target)){
                return true;
            }
        }
        return false;
    }
};
