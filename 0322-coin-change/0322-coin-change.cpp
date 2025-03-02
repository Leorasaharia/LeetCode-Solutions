class Solution {
public:
    int coinChange(vector<int>& coins, int amt) {
        sort(coins.begin(), coins.end(), greater<int>());
        int count = 0;

        for (int c : coins) {
            if (amt >= c) {
                count += amt / c;
                amt %= c;
            }
        }

        return amt == 0 ? count : -1;
    }
};
