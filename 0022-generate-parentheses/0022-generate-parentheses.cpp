class Solution{
public:
    vector<string> generateParenthesis(int n){
        vector<string> res;
        stack<pair<string, pair<int, int>>> stk;
        stk.push({"", {0, 0}}); 
        while (!stk.empty()){
            auto [curr,cnt]=stk.top();
            stk.pop();
            int op=cnt.first;
            int cl=cnt.second;
            if(curr.length()==2*n){
                res.push_back(curr);
                continue;
            }if(op<n){
                stk.push({curr+"(",{op+1,cl}});
            }if(cl<op){
                stk.push({curr+")",{op,cl+1}});
            }
        }
        return res;
    }
};
