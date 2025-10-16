class Solution {
public:
    int findSmallestInteger(vector<int>& nums, int value) {
        int v=value;
        vector<int> mex(v);
        int n=nums.size();
        for(int i=0;i<n;i++){
            int res=nums[i]%v;
            if(res<0){
                res+=v;
            cnt[res]++;
        }
        for(int x=0;;x++){
            int res=x%v;
            if(cnt[res]==0){
                return x;
            }
            cnt[res]--;
        }
    }
};