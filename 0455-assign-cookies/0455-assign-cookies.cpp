class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        int idx=0;
        for (int i=0;i<s.size() && idx<g.size(); ++i) {
            if (s[i]>=g[idx]) {
                idx++;
            }
        }
        return idx;
    }
};