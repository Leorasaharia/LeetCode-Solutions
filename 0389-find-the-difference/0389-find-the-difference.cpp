class Solution {
public:
    char findTheDifference(string s, string t) {
        int n=s.size();
        int m=t.size();
        for(int i=0;i<m;i++){
            int add=0;
            for(int j=0;j<n;j++){
                if(t[i]==s[j]){
                    s[j]='*'; 
                    add=1;
                    break;
                }
            }
            if(add==0) {
                return t[i];
            }
        }
        return 0;
    }
};
