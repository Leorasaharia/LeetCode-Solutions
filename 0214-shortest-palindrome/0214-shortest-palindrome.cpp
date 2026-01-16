class Solution{
public:
    string shortestPalindrome(string s){
        int n=s.size();
        string rev=s;
        reverse(rev.begin(),rev.end());
        string t=s+"#"+rev;
        int m=t.size();
        vector<int> lps(m,0);
        for(int i=1,len=0;i<m;){
            if(t[i]==t[len]){
                lps[i++]=++len;
            }
            else if(len){
                len=lps[len-1];
            }
            else{
                lps[i++]=0;
            }
        }
        int add = n-lps[m-1];
        string res;
        res.reserve(add+n);
        for(int i=0;i<add;++i){
            res += rev[i];
        }
        return res+s;
    }
};
