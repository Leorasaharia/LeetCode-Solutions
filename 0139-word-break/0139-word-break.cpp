class Solution {
public:
    unordered_map<string,bool>m;
    bool wordBreak(string s, vector<string>& d) {
        if(m.count(s)) return m[s];
        for(int i=1;i<=s.size();i++){
            string left=s.substr(0,i);
            for(string&w:d){
                if(left==w){
                    string right=s.substr(i);
                    if(right.empty()||wordBreak(right,d))
                        return m[s]=true;
                    break;
                }
            }
        }
        return m[s]=false;
    }
};
