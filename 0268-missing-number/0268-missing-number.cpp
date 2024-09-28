class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int sum=n*(n+1)/2, sumorg=0; 
        for(int num:nums){
            sumorg+=num;
        }
        return sum-sumorg; 
    }
};
