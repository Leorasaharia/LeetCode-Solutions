class Solution {
public:
    static bool cmp(vector<int>& a, vector<int>& b) {
        return a[0]*b[1] < b[0]*a[1];
    }
    vector<int> kthSmallestPrimeFraction(vector<int>& arr, int k) {
        int n=arr.size();
        vector<vector<int>> f;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                f.push_back({arr[i],arr[j]});
            }
        }
        sort(f.begin(),f.end(),cmp);
        return {f[k-1][0],f[k-1][1]};
    }
};
