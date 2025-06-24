class Solution {
public:
    int maximumGap(vector<int>& nums) {
        int n=nums.size();
        if(n<2){
            return 0;
        }
        int val=nums[0];
        for(int i=1;i<n;i++){
            if(nums[i]>val){
                val=nums[i];
            }
        }
        long long exp=1;
        vector<int> temp(n);
        while(val/exp>0){
            vector<int> cnt(10,0);
            for(int i=0;i<n;i++){
                cnt[(nums[i]/exp)%10]++;
            }
            for(int i=1;i<10;i++){
                cnt[i]+=cnt[i-1];
            }
            for(int i=n-1;i>=0;i--){
                temp[--cnt[(nums[i]/exp)%10]]=nums[i];
            }
            for(int i=0;i<n;i++){
                nums[i]=temp[i];
            }
            exp*=10;
        }
        int mx=0;
        for(int i=1;i<n;i++){
            int gap=nums[i]-nums[i-1];
            if(gap>mx){
                mx=gap;
            }
        }
        return mx;
    }
};
