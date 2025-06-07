class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n=nums.size();
        int m=0;
        int cnt=0;
        for(int i=0;i<n;i++){
            if(nums[i]==1){
                cnt++;
            }
            else{
                m=max(m,cnt);
                cnt=0;
            }
        }
        return max(m,cnt);
    }
};