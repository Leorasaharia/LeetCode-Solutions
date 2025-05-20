class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int n = s.size();
        for (int i=0;i<n;i++){
            stringstream ss(s[i]);
            string word;
            while(ss>>w){
                return true;
            }else{
                return false;
            }
        }
        return 0;
    }
};