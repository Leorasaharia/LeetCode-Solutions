class Solution {
public:
    vector<vector<string>> partition(string s) {
        vector<vector<string>>res;
        vector<string>p;
        backtrack(s,0,p,res);
        return res;
    }
    void backtrack(string&s,int i,vector<string>&p,vector<vector<string>>&res){
        if(i==s.size()){
            res.push_back(p);
            return;
        }
        for(int j=i;j<s.size();j++){
            if(isP(s,i,j)){
                p.push_back(s.substr(i,j-i+1));
                backtrack(s,j+1,p,res);
                p.pop_back();
            }
        }
    }
    bool isP(string&s,int l,int r){
        while(l<r)if(s[l++]!=s[r--])return false;
        return true;
    }
};