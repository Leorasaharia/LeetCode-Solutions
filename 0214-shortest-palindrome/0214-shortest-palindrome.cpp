class Solution{
public:
    string shortestPalindrome(string s){
        int n=s.size();
        string rev;
        rev.resize(n);
        for(int i=0;i<n;++i)
            rev[i]=s[n-1-i];
        for(int add=0;add<n;++add){
            bool temp=true;
            for(int j=0;j+add<n;++j){
                if(s[j]!=rev[add+j]){
                    temp=false;
                    break;
                }
            }
            if(temp){
                int total=add+n;
                string res;
                res.resize(total);
                for(int k=0;k<add;++k)
                    res[k]=rev[k];
                for(int k=0;k<n;++k)
                    res[add+k]=s[k];
                return res;
            }
        }
        return"";
    }
};
