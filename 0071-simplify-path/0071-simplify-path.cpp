class Solution {
public:
    string simplifyPath(string path) {
        vector<string>s;
        string res,temp;
        for(int i=0;i<path.size();++i){
            if(path[i]=='/'){
                continue;
            }
            while(i<path.size()&&path[i]!='/'){
                temp+=path[i++];
            }
            if(temp==".."){
                if(!s.empty())s.pop_back();
                }
            else if
                (temp!=".")s.push_back(temp);
            
            temp.clear();
        }
        for(auto&d:s){
            res+="/"+d;
        }
        return res.empty()?"/":res;
    }
};
