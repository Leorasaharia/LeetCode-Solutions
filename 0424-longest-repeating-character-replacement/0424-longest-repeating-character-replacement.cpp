class Solution {
public:
    int characterReplacement(string s,int k) {
        int ans=0;
        int n=s.size();
        for(char c='A';c<='Z';c++){
            int i=0,j=0,r=0;
            while(j<n){
                if(s[j++]!=c){
                    r++;
                }
                while(r>k){
                    if(s[i++]!=c){
                        r--;
                    }
                }
                ans=max(ans,j-i);
            }
        }
        return ans;
    }
};
