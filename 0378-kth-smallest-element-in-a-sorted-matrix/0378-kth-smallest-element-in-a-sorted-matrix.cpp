class Solution {
public:
    int kthSmallest(vector<vector<int>>& m, int k) {
        int n=m.size();
        vector<int> a;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                a.push_back(m[i][j]);
            }
        }
        sort(a.begin(),a.end());
        return a[k-1];
    }
};
