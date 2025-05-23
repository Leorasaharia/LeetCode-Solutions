class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int n=nums.size();
        int cnt=0;
        for(int i=0;i<n;i++){
            int subsum=0;
            for(int j=i;j<n;j++){
                subsum+=nums[j];
                if(subsum%k==0){
                    cnt++;
                }
            }
        }
        return cnt;
    }
};
