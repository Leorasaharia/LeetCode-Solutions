class Solution {
public:
    int countCompleteSubarrays(vector<int>&nums){
        int ans=0,n=nums.size();
        int cnt[2001]={0},total=0;
        for(int i=0;i<n;i++){
            if(cnt[nums[i]]==0){
                total++;
            }
            cnt[nums[i]]++;
        }
        for(int i=0;i<n;i++){
            int c[2001]={0},d=0;
            for(int j=i;j<n;j++){
                if(c[nums[j]]==0){
                    d++;
                }
                c[nums[j]]++;
                if(d==total){
                    ans++;
                }
            }
        }
        return ans;
    }
};
