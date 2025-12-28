class Solution {
public:
    bool dfs(vector<vector<char>>& b, string& w, int i, int j, int k) {
        if (k == w.size()){
            return true;
        }
        if (i < 0 || j < 0 || i >= b.size() || j >= b[0].size() || b[i][j] != w[k]){
            return false;
        }
        char tmp = b[i][j];
        b[i][j] = '#';
        bool found = dfs(b, w, i+1, j, k+1) || dfs(b, w, i-1, j, k+1) ||
                     dfs(b, w, i, j+1, k+1) || dfs(b, w, i, j-1, k+1);
        b[i][j] = tmp;
        return found;
    }
    bool exist(vector<vector<char>>& b, string w) {
        int m = b.size(), n = b[0].size();
        for (int i = 0; i < m; i++)
            for (int j = 0; j < n; j++)
                if (b[i][j] == w[0] && dfs(b, w, i, j, 0)) {
                    return true;
                }
        return false;
    }
};
