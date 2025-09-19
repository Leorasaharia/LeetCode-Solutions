class Solution {
public:
    bool partitionArray(vector<int>& nums, int k) {
        int n=nums.size();
        if(n%k!=0){
            return false;
        }
        int res=n/k;
        sort(nums.begin(),nums.end());
        int cnt=1;
        for(int i=1;i<n;i++){
            if(nums[i]==nums[i-1]){
                cnt++;
                if(cnt>res){
                    return false;
                }
            }else{
                cnt=1;
            }
        }
        return true;
    }
};
