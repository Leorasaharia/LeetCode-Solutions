class Solution {
public:
    int longestPalindrome(string s) {
        int cnt[128] = {}, res = 0, odd = 0;
        for (int i = 0; i < s.size(); i++){
            cnt[s[i]]++;
        }
        for (int i = 0; i < 128; i++) {
            if (cnt[i] % 2 == 0) {
                res += cnt[i];
            }
            else {
                res += cnt[i] - 1;
                odd = 1;
            }
        }
        return res + odd;
    }
};
