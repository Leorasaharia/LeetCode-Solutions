class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int sm=0,m=0;
        for(int n:nums){
            sm+=n;
            m=min(m,sm);
        }
        return -m+1;
    }
};
