class Solution {
public:
    bool rotateString(string s,string g) {
        if(s.length()!=g.length()){
            return false;
        }
        for(int i=0;i<s.length();i++){
            bool m=true;
            for(int j=0;j<s.length();j++){
                if(s[(i+j)%s.length()]!=g[j]) {
                    m=false;
                    break;
                }
            }
            if(m){
                return true;
            }
        }
        return false;
    }
};
