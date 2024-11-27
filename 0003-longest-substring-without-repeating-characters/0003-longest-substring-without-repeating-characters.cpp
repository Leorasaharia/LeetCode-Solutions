class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> c;
        int m=0,a=0;
        for(int b=0;b<s.length();++b) {
            while(c.find(s[b])!=c.end()) {
                c.erase(s[a]);
                ++a;
            }
            c.insert(s[b]);
            m=max(m,b-a+1);
        }
        return m;
    }
};
