class Solution {
public:
    int rob(vector<int>& nums) {
        int a=0, b=0;
        int n=nums.size();
        if(n==0){
            return 0;
        }for (int num:nums){
            int temp=a;
            a=max(b+num,a);
            b=temp;
        }
        return a;        
    }
};