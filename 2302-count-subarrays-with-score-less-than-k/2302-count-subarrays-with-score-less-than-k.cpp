class Solution {
public:
    long long countSubarrays(vector<int>& nums, long long k) {
        int n=nums.size();
        vector<long long> pref(n+1,0);
        for(int i=0;i<n;i++){
            pref[i+1]=pref[i]+nums[i];
        }
        long long cnt=0;
        for(int i=0;i<n;i++){
            int beg=i;
            int end=n-1;
            int ans=i-1;
            while(beg<=end){
                int mid=(beg+end)/2;
                long long sum=pref[mid+1]-pref[i];
                if(sum*(mid-i+1)<k){
                    ans=mid;
                    beg=mid+1;
                }else{
                    end=mid-1;
                }
            }
            cnt+=ans-i+1;
        }
        return cnt;
    }
};
