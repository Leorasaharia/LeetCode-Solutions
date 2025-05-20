class Solution {
    unordered_map<int, bool> memo;
public:
    bool canIWin(int max, int total) {
        int sum = max * (max + 1) / 2;
        if (total <= 0) return true;
        if (sum < total) return false;
        vector<bool> val(max + 1, false);
        return dfs(max, total, val);
    }

    bool dfs(int max, int total, vector<bool>& val) {
        if (total <= 0) return false;

        int key = 0;
        for (int i = 1; i <= max; i++) {
            if (val[i]) key |= (1 << (i - 1));
        }

        if (memo.count(key)) return memo[key];

        for (int i = 1; i <= max; i++) {
            if (!val[i]) {
                val[i] = true;
                if (!dfs(max, total - i, val)) {
                    val[i] = false;
                    return memo[key] = true;
                }
                val[i] = false;
            }
        }

        return memo[key] = false;
    }
};
