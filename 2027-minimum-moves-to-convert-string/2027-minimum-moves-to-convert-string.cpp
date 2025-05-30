class Solution {
public:
    int minimumMoves(string s) {
        int n=s.size();
        int cnt=0;
        for(int i=0;i<n;i++){
            if(s[i]=='X'){
                cnt++;
                i+=2; 
            }
        }
        return cnt;
    }
};
