class Solution {
public:
    bool isNumber(string s) {
        long long i=0;
        int n=s.size();
        while(i<n && s[i]==' '){
            i++;
        }
        bool num=false;
        bool dot=false;
        bool exp=false;
        for(i=0;i<n;i++){
            char c=s[i];
            if(isdigit(c)){
                num=true;
            }
            else if(c=='.'){
                if(dot||exp){
                    return false;
                }
                dot=true;
            }
            else if(c=='e'||c=='E'){
                if (!num||exp){
                    return false;
                }
                exp=true;
                num=false;
            }
            else if(c=='+'||c=='-'){
                if(i>0&&s[i-1]!='e'&&s[i-1]!='E'){
                    return false;
                }
            }else{
                return false;
            }
        }
        return num;
    }
};
