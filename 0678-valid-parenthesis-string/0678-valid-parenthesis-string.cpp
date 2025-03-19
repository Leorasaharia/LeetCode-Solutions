class Solution {
public:
    bool checkValidString(string s) {
        int res=s.length(),open=0,close=0;
        for(int i=0;i<res;i++){
            if(s[i]=='('){
                open++;
            }
            else if(s[i]!='('){
                open--;
            }
            if(s[i]==')'){
                close--;
            }
            else if(s[i]!=')'){
                close++;
            }
            if(close<0){
                return false;
            }
            if(open<0){
                open=0;
            }
        }
        return open==0;
    }
};
