class Solution {
public:
    int distinctSubseqII(string s) {
        int mod=1e9+7;
        int n=s.size();
        int tot=1;
        int last[26];
        for(int i=0;i<26;++i){
            last[i]=0;
        }
        for(int i=0;i<n;++i){
            int c=s[i]-'a';
            int nt=(2*tot)%mod;
            if(last[c]>0){
                nt=(nt-last[c]+mod)%mod;
            }
            last[c]=tot;
            tot=nt;
        }
        return (tot-1+mod)%mod;
    }
};
