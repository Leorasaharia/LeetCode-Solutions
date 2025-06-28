class Solution {
public:
    int numSubarrayBoundedMax(vector<int>& a, int l, int r) {
        int cnt=0, beg=-1, end=-1, n=a.size();
        for(int i=0;i<n;i++) {
            if(a[i]>r){
                beg=i;
            }
            if(a[i]>=l && a[i]<=r){
                end=i;
            }
            if(end>beg){
                cnt+=end-beg;
            }
        }
        return cnt;
    }
};
