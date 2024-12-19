class Solution{
public:
    vector<string> letterCombinations(string dig){
        if(dig.empty())
        return {};
        vector<string> m={"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        vector<string> res;
        res.push_back("");
        for(char d:dig){
            int idx=d-'0';
            string l=m[idx];
            vector<string> temp;
            for(string s:res){
                for(char ltr:l){
                    temp.push_back(s+ltr);
                }
            }
            res=temp;
        }
        return res;
    }
};
