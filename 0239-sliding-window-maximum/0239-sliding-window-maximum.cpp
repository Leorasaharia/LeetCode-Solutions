class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& a, int k) {
        int n=a.size();
        vector<int> ans;
        int q[n];
        int f=0,r=-1;
        for(int i=0;i<n;i++){
            if(f<=r&&q[f]<=i-k){
                f++;
            }
            while(f <= r && a[q[r]]<a[i]){
                r--;
            }
            q[++r]=i;
            if(i>=k-1){
                ans.push_back(a[q[f]]);
            }
        }
        return ans;
    }
};
