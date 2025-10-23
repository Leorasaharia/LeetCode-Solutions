class Solution{
public:
    bool hasSameDigits(string s){
        int n=s.size();
        while(n>2){
            string t="";
            for(int i=0;i<n-1;i++){
                int a=s[i]-'0';
                int b=s[i+1]-'0';
                t+=char((a+b)%10+'0');
            }
            s=t;
            n=s.size();
        }
        return s[0]==s[1];
    }
};
