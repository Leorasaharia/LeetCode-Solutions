class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> m;
        for (int i = 0; i < n; i++) {
            m[nums[i]]++;
        }
        vector<int> r;
        for (auto [k, v] : m) {
            if (v > n / 3) {
                r.push_back(k);
            }
        }
        return r;
    }
};
