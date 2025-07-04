class Solution {
public:
    int numSubseq(vector<int>& nums, int t) {
        int n=nums.size();
        int mod=1e9+7;
        vector<int> pow(n+1,1);
        for(int i=1;i<=n;i++) {
            pow[i]=(pow[i-1]*2)%mod;
        }
        sort(nums.begin(),nums.end());
        int i=0;
        int j=n-1;
        int cnt=0;
        while(i<=j){ //2 pointers
            if(nums[i]+nums[j]<=t){ //total valid subsequences hai in this range 
                cnt=(cnt+pow[j-i])%mod;
                i++; //nums[i] ko fix karenge
            }else{
                j--;//reduce max if if bigger
            }
        }
        return cnt;
    }
};
