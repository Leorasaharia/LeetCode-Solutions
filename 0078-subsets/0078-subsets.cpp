class Solution {
public:
    vector<vector<int>> subsets(vector<int>& n){
        vector<vector<int>> res;
        vector<int> t;
        backtrack(n,0,t,res);
        return res;
    }
    void backtrack(vector<int>& n, int st, vector<int>& t, vector<vector<int>>& res) {
        res.push_back(t);
        for (int i=st;i<n.size();i++){
            t.push_back(n[i]);
            backtrack(n,i+1,t,res);
            t.pop_back();
        }
    }
};
