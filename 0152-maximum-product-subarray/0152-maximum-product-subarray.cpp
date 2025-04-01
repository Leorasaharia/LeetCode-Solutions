class Solution { 
public: 
    int maxProduct(vector<int>&nums) {
        int res=nums[0],n=nums.size();
        for(int i=0;i<n;i++) {
            int prod=nums[i];
            for(int j=i+1;j<n;j++) {
                res=max(res,prod);
                prod*=nums[j];
            }
            res=max(res,prod);
        }
        return res;
    }
};
