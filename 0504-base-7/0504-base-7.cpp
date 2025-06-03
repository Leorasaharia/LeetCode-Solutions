class Solution{
public:
    string convertToBase7(int n){
        if(n==0){
            return "0";
        }
        bool neg=false; 
        if(n<0){
            neg=true; 
            n=-n;
        }
        string a,b; 
        while(n){
            a.push_back(char('0'+n%7)); 
            n/=7;
        }
        for(int i=a.size()-1;i>=0;--i){
            b.push_back(a[i]);
        }
        if(neg){
            return "-"+b;
        }
        else{
            return b;
        }
    }
};
