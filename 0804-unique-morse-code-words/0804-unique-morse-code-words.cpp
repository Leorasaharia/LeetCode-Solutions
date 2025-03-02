class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        string m[26] = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        vector<string> trans;
        for(auto &s:words){
            string str= "";
            for(auto& c:s){
                str+=m[c-'a'];
            }
            bool f=false;
            for(auto& trns:trans){
                if(trns==str){
                    f=true;
                    break;
                }
            }
            if(!f){
                trans.push_back(str);
            }
        }
        return trans.size();
    }
};
