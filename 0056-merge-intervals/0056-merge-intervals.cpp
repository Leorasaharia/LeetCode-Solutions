class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& a) {
        sort(a.begin(), a.end());
        vector<vector<int>> r;
        for (auto& x : a) {
            if (r.empty() || r.back()[1] < x[0])
                r.push_back(x);
            else
                r.back()[1] = max(r.back()[1], x[1]);
        }
        return r;
    }
};
