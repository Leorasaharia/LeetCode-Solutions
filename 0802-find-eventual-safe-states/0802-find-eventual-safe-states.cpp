class Solution {
public:
    bool dfs(vector<vector<int>>&g,int u,vector<bool>&vis,vector<bool>&rec,vector<bool>&unsafe){
        if(unsafe[u]){
            return true;
        }
        if(vis[u]){
            return false;
        }
        vis[u]=1;
        rec[u]=1;
        for(int i=0;i<g[u].size();i++){
            int v=g[u][i];
            if(rec[v]||dfs(g,v,vis,rec,unsafe)){
                unsafe[u]=1;
                rec[u]=0;
                return true;
            }
        }
        rec[u]=0;
        return false;
    }
    vector<int> eventualSafeNodes(vector<vector<int>>&g){
        int n=g.size();
        vector<bool>vis(n,0),rec(n,0),unsafe(n,0);
        for(int i=0;i<n;i++){
            if(!vis[i]){
                dfs(g,i,vis,rec,unsafe);
            }
        }
        vector<int>ans;
        for(int i=0;i<n;i++){
            if(!unsafe[i]){
                ans.push_back(i);
            }
        }
        return ans;
    }
};
