class Solution {
public:
    bool doesAliceWin(string s) {
        string vowels="aeiou";
        int cnt=0;
        int n=s.size();
        int m=vowels.size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(s[i]==vowels[j]){
                    cnt++;
                    break;
                }
            }
        }
        if(cnt>0){
            return true;
        }
        return false;
    }
};