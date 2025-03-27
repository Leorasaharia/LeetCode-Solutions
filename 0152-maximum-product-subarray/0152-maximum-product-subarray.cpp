class Solution { 
public: 
  int maxProduct(vector<int>& nums) {
    int res=nums[0];
    int n=nums.size();
    for(int i=0;i<n-1;i++){
        int prod=nums[i];
        for(int j=i+1;j<n;j++){
           res=max(res,prod);
           prod=prod*nums[j];
        }
        res=max(res,prod);
    }
    return res;
}
};
