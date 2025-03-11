class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int n=s.length();
        if(n!=t.length()){
            return false;
        }
        char a[256]={0},b[256]={0};
        for(int i=0;i<n;i++){
            if(a[s[i]]&&a[s[i]]!=t[i]){
                return false;
            }
            if(b[t[i]]&&b[t[i]]!=s[i]){
                return false;
            }
            a[s[i]]=t[i];
            b[t[]]=s[i];
        }
        return true;
    }
};
