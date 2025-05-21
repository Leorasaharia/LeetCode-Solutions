class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> res;
        int n = nums.size();
        set<vector<int>> seen;
        stack<pair<vector<int>, int>> stk;
        sort(nums.begin(), nums.end()); 
        stk.push({nums, 0});
        while (!stk.empty()) {
            auto [v, pos] = stk.top(); stk.pop();
            if (pos == n) {
                if (seen.insert(v).second) res.push_back(v);
            } else {
                for (int i = pos; i < n; ++i) {
                    swap(v[pos], v[i]);
                    stk.push({v, pos + 1});
                    swap(v[pos], v[i]);
                }
            }
        }
        return res;
    }
};
