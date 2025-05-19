class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& a, int k) {
        if(k<=1){
            return 0;
        }
        int prod=1;
        int ans=0,x=0;
        int n=a.size();
        for(int y=0;y<n;y++){
            prod*=a[y];
            while(prod>=k){
                prod/=a[x++];
            }
            ans += y-x+1;
        }
        return ans;
    }
};
