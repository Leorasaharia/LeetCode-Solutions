class Solution {
public:
    vector<vector<int>> findSubsequences(vector<int>& nums) {
        set<vector<int>> s;
        queue<vector<int>> q;
        for(int x:nums){
            int n=q.size();
            for(int i=0;i<n;i++){
                vector<int> pres=q.front();
                q.pop();
                q.push(pres);
                if(pres.empty() || x>=pres.back()){
                    vector<int> nxt=pres;
                    nxt.push_back(x);
                    q.push(nxt);
                    if(nxt.size()>1){
                        s.insert(nxt);
                    }
                }
            }
            vector<int> curr={x};
            q.push(curr);
        }
        return vector<vector<int>>(s.begin(),s.end());
    }
};
