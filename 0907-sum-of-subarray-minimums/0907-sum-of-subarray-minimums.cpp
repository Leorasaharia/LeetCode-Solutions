class Solution {
public:
    int sumSubarrayMins(vector<int>&arr){
        const int mod=1e9+7;
        int n=arr.size();
        vector<int>dp(n);
        long long res=0;
        for(int i=0;i<n;++i){
            int j=i-1;
            while(j>=0 && arr[j]>arr[i]){
                j--;
            }
            int prev=j;
            int count=i-prev;
            long long val=1LL*count*arr[i];
            if(prev>=0){
                val=(val+dp[prev])%mod;
            }
            dp[i]=val;
            res=(res+dp[i])%mod;
        }
        return res;
    }
};
