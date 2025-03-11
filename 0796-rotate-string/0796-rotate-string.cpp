class Solution {
public:
    bool rotateString(string s,string g) {
        if(s.length()!=g.length()){
            return false;
        }
        string t=s+s;
        size_t f=t.find(g);
        if(f!=string::npos){
            return true;
        }
        return false;
    }
};
