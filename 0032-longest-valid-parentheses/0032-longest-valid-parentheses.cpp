class Solution {
public:
    int longestValidParentheses(string s){
        int n=s.size();
        int a=0; int b=0;
        int res=0;
        //we check from left to right firstly
        for(int i=0;i<n;i++){
            if(s[i]=='('){
                a++;
            }
            else{
                b++;
            }
            if(a==b){
                res=max(res,2*b);
            }
            else if(b>a){
                a=b=0;
            }
        }
        a=b=0;
        // now right to left
        for(int i=n-1;i>=0;i--){
            if(s[i]=='('){
                a++;
            }
            else{
                b++;
            }
            if(a==b){
                res=max(res,2*a);
            }
            else if(a>b){
                a=b=0;
            }
        }
        return res;
    }
};
