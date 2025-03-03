class Solution {
public:
    static int c(char a, char b) {
        return a != b;
    }
    int minDistance(string w1, string w2) {
        int m = w1.size(), n = w2.size();
        vector<int> dp(n + 1);
        for (int j = 0; j <= n; j++){
            dp[j] = j;
        }
        for (int i = 1; i <= m; i++) {
            int prev = dp[0];
            dp[0] = i;
            for (int j = 1; j <= n; j++) {
                int temp = dp[j];
                dp[j] = min({dp[j - 1] + 1, dp[j] + 1, prev + c(w1[i - 1], w2[j - 1])});
                prev = temp;
            }
        }
        return dp[n];
    }
};
