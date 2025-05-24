class Solution {
public:
    int calculate(string s) {
        long arr=0;
        int a=0;
        int num=0;
        char op='+';
        s+='+';
        int n=s.size();
        for(int i=0;i<n;i++){
            char c=s[i];
            if(isdigit(c)){
                num=num*10+(c-'0');
            }else if(c!=' '){
                if(op=='+'){
                    arr+=a;
                    a=num;
                }else if(op=='-'){
                    arr+=a;
                    a=-num;
                }else if(op=='*'){
                    a*=num;
                }else if(op=='/'){
                    a/=num;
                }
                op=c;
                num=0;
            }
        }
        return arr+a;
    }
};
