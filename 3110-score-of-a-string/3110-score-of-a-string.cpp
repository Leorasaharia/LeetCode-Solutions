class Solution {
public:
    int scoreOfString(string s) {
        int n=s.size();
        if(n<2){
            return 0;
        }
        int sm=0;
        for(int i=0;i<n-1;i++){
            sm+=abs(s[i]-s[i+1]);
        }
        return sm;
    }
};