class Solution {
public:
    int largestRectangleArea(vector<int>&h) {
        int n=h.size();
        vector<int>l(n),r(n);
        for(int i=0;i<n;i++) {
            l[i]=i;
            while(l[i]>0&&h[l[i]-1]>=h[i])
                l[i]=l[l[i]-1];
        }
        for(int i=n-1;i>=0;i--) {
            r[i]=i;
            while(r[i]<n-1&&h[r[i]+1]>=h[i])
                r[i]=r[r[i]+1];
        }
        int a=0;
        for(int i=0;i<n;i++)
            a=max(a,h[i]*(r[i]-l[i]+1));
        return a;
    }
};
