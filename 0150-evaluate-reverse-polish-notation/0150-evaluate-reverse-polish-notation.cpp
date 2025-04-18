class Solution {
public:
    int evalRPN(vector<string>& t) {
        stack<int> s;
         for(int i=0;i<t.size();i++){
            string x=t[i];
            if(x=="+"||x=="-"||x=="*"||x=="/"){
                int b=s.top(); 
                s.pop();
                int a=s.top(); 
                s.pop();
                if(x=="+"){
                    s.push(a+b);
                }
                else if(x=="-"){
                    s.push(a-b);
                }
                else if(x=="*"){
                    s.push(a*b);
                }
                else{
                    s.push(a/b);
                }
            }else{
                int n=0,j=0,sgn=1;
                if(x[0]=='-'){
                    sgn=-1,j=1;
                }
                while(j<x.size()){
                    n=n*10+(x[j++]-'0');
                }
                s.push(n*sgn);
            }
        }
        return s.top();
    }
};
