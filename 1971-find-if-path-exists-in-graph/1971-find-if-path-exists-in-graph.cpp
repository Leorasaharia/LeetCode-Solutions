class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        vector<vector<int>> g(n);
        for(auto& e:edges){
            g[e[0]].push_back(e[1]);
            g[e[1]].push_back(e[0]);
        }
        vector<bool> vis(n,false);
        stack<int> st;
        st.push(source);
        while(!st.empty()){
            int u=st.top();
            st.pop();
            if(u==destination){
                return true;
            }
            if(vis[u]){
                continue;
            }
            vis[u]=true;
            for(int v:g[u]){
                if(!vis[v]){
                    st.push(v);
                }
            }
        }
        return false;
    }
};
