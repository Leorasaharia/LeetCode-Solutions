class Solution {
public:
    string clearDigits(string s) {
        stack<char> stk;
        for (int i = 0; i < s.size(); i++) {
            if (isdigit(s[i])) {
                if (!stk.empty()) stk.pop();
            } else {
                stk.push(s[i]);
            }
        }
        string r = "";
        while (!stk.empty()) {
            r = stk.top() + r;
            stk.pop();
        }
        return r;
    }
};
