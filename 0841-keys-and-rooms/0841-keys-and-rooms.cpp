class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n=rooms.size();
        vector<bool> vis(n,false);
        stack<int> stk;
        stk.push(0);
        vis[0]=true;
        while(!stk.empty()){
            int r=stk.top();
            stk.pop();
            for(int i=0;i<rooms[r].size();i++){
                int k=rooms[r][i];
                if(!vis[k]){
                    vis[k]=true;
                    stk.push(k);
                }
            }
        }
        for(int i=0;i<n;i++){
            if(!vis[i]){
                return false;
            }
        }
        return true;
    }
};
