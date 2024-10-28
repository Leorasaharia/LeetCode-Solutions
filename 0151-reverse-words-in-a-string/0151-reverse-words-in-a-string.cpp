class Solution {
public:
    string reverseWords(string s) {
        vector<string> ws; string w;
        for (char c:s){
            if (c!=' ') 
            w+=c;
            else if(!w.empty()){ 
                ws.push_back(w); 
                w.clear(); }
        }
        if(!w.empty()) ws.push_back(w);
        reverse(ws.begin(),ws.end());
        string res;
        for(int i=0;i<ws.size();i++){
            res+=ws[i];
            if(i<ws.size()-1) 
            res+=" ";
        }
        return res;
    }
};
