class Solution {
public:
    bool dfs(vector<vector<int>>& graph, int u, vector<bool>& vis, vector<bool>& rec, vector<bool>& unsafe) {
        vis[u]=1;
        rec[u]=1;
        for(int i=0;i<graph[u].size();i++){
            int v=graph[u][i];
            if(!vis[v] && dfs(graph,v,vis,rec,unsafe)){
                unsafe[u]=1;
            }
            else if(rec[v]){
                unsafe[u]=1;
            }
        }
        rec[u]=0;
        return unsafe[u];
    }
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        int n=graph.size();
        vector<bool>vis(n,0), rec(n,0), unsafe(n,0);
        for(int i=0;i<n;i++){
            if(!vis[i]){
                dfs(graph,i,vis,rec,unsafe);
            }
        }
        vector<int>res;
        for(int i=0;i<n;i++){
            if(unsafe[i]==0){
                res.push_back(i);
            }
        }
        return res;
    }
};
