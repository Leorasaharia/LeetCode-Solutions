class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>> res={{}};
        for(int i=0;i<n;i++) {
            vector<vector<int>> newsubs;
            for(auto subs:res) {
                subs.push_back(nums[i]);
                newsubs.push_back(subs);
            }
            for(auto news:newsubs) {
                res.push_back(news);
            }
        }
        return res;
    }
};
