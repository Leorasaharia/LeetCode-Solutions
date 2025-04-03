class Solution {
public:
    int countSubstrings(string s) {
        int n=s.size(),c=0;
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                int l=i,r=j,f=1;
                while(l<r){
                    if(s[l]!=s[r]){
                        f=0;
                        break;
                    }
                    l++,
                    r--;
                }
                if(f){
                    c++;
                }
            }
        }
        return c;
    }
};
