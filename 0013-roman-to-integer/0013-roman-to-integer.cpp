class Solution {
public:
    int romanToInt(string s){
        int tot=0;
        for(int i=0;i<s.size();++i){
            int curr=value(s[i]);
            int next=(i+1<s.size())?value(s[i+1]):0;
            tot+=(curr<next)?-curr:curr;
        }
        return tot;
    }
    
    int value(char r){
        switch(r){
            case 'I': return 1;
            case 'V': return 5;
            case 'X': return 10;
            case 'L': return 50;
            case 'C': return 100;
            case 'D': return 500;
            case 'M': return 1000;
        }
        return 0;
    }
};
