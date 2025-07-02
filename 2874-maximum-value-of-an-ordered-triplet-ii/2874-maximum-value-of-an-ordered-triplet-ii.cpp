class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        int n=nums.size();
        vector<int>left(n),right(n);
        for(int i=1;i<n;i++){
            left[i]=max(left[i-1],nums[i-1]);
        }
        for(int i=n-2;i>=0;i--){
            right[i]=max(right[i+1],nums[i+1]);
        }
        long long mx=0;
        for(int j=1;j<n-1;j++){
            long long v=1LL*(left[j]-nums[j])*right[j];
            mx=max(mx,v);
        }
        return mx;
    }
};
