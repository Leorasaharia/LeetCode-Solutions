class Solution {
public:
    bool wordPattern(string p, string s) {
        vector<string> w; 
        string t;
        stringstream ss(s);
        while (ss >> t) w.push_back(t);
        if (p.size() != w.size()) return false;
        string c2w[26] = {};
        unordered_map<string, char> w2c;
        for (int i = 0; i < p.size(); i++) {
            char c = p[i];
            string x = w[i];
            if (c2w[c - 'a'] != "" && c2w[c - 'a'] != x) return false;
            if (w2c.count(x) && w2c[x] != c) return false;
            c2w[c - 'a'] = x;
            w2c[x] = c;
        }
        return true;
    }
};
