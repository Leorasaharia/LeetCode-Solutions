class Solution {
public:
    bool doesAliceWin(string s) {
        string vowels="aeiou"; 
        int cnt=0;
        for(char c:s){
            for(char v:vowels){
                if(c==v){
                    cnt++;
                    break;
                }
            }
        }
        return cnt>0;
    }
};