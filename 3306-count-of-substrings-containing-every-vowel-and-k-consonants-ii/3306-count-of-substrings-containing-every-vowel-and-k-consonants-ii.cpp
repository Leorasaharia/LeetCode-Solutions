class Solution {
public:
    long long Solve(string& w, int k) {
        int n = w.length();
        int i = 0, j = 0;
        long long ans = 0;
        map<char, int> mp;
        int cnt = 0;

        while (j < n) {
            if (w[j] == 'a' || w[j] == 'e' || w[j] == 'i' || w[j] == 'o' || w[j] == 'u') {
                mp[w[j]]++;
            } else {
                cnt++;
            }

            while (mp.size() == 5 && cnt >= k) {
                ans += w.size() - j;

                if (mp.find(w[i]) != mp.end()) {
                    mp[w[i]]--;
                    if (mp[w[i]] == 0) {
                        mp.erase(w[i]);
                    }
                } else {
                    cnt--;
                }
                i++;
            }
            j++;
        }
        return ans;
    }

    long long countOfSubstrings(string w, int k) {
        return Solve(w, k) - Solve(w, k + 1);
    }
};
