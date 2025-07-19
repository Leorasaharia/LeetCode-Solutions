class Solution {
public:
    vector<string> removeSubfolders(vector<string>& folder) {
        sort(folder.begin(), folder.end());
        vector<string> res;
        int n=folder.size();
        for(int i=0;i<n;i++){
            if(res.empty())res.push_back(folder[i]);
            else{
                string last=res.back();
                int len=last.size();
                if(folder[i].substr(0,len)==last && folder[i][len]=='/'){
                    continue;
                }else{
                    res.push_back(folder[i]);
                }
            }
        }
        return res;
    }
};
