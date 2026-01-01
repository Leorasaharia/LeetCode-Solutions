class Solution{
public:
    vector<int> plusOne(vector<int>&digits){
        string s="";
        for(int i=0;i<digits.size();i++){
            s+=char(digits[i]+'0');
        }

        int i=s.length()-1;
        while(i>=0&&s[i]=='9'){
            s[i]='0';
            i--;
        }

        if(i<0){
            s='1'+s;
        }else{
            s[i]++;
        }

        vector<int> res;
        for(int i=0;i<s.length();i++){
            res.push_back(s[i]-'0');
        }
        return res;
    }
};
