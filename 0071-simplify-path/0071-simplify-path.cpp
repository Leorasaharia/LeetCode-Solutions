class Solution {
public:
    string simplifyPath(string path) {
        vector<string>s;
        string res;
        string temp;
        int i=0;
        do{
            while(i<path.size()&&path[i]=='/'){
                i++;
            }
            temp="";
            while(i<path.size()&&path[i]!='/'){
                temp+=path[i++];
            }
            if(temp==".."){
                if(!s.empty())s.pop_back();
            }
            else if(temp!=""&&temp!="."){
                s.push_back(temp);
            }
        }while(i<path.size());
        for(auto&d:s){
            res+="/"+d;
        }
        return res.empty()?"/":res;
    }
};
