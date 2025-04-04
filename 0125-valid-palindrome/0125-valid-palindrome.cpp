class Solution {
public:
    bool isPalindrome(string s) {
        int n=s.length();
        string t="";
        for(int i=0;i<n;i++){
            char c=s[i];
            if(c>='A'&&c<='Z'){
                c=c-'A'+'a';
            }
            if((c>='a'&&c<='z')||(c>='0'&&c<='9')){
                t+=c;
            }
        }
        int l=0;
        int r=t.length()-1;
        while(l<r){
            if(t[l]!=t[r]){
                return 0;
            }
            l++;
            r--;
        }
        return 1;
    }
};
