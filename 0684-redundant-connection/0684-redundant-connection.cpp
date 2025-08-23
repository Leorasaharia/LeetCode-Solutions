struct DSU {
    vector<int> parent;
    DSU(int n){
        parent.resize(n+1);
        for(int i=1;i<=n;i++){
            parent[i]=i;
        }
    }
    int findParent(int x){
        if(parent[x]==x){
            return x;
        }
        else{
            return parent[x]=findParent(parent[x]);
        }
    }
    bool unionSet(int x,int y){
        int a=findParent(x);
        int b=findParent(y);
        if(a==b){
            return false;
        }
        parent[a]=b;
        return true;
    }
};

class Solution {
public:
    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
        int n=edges.size();
        DSU dsu(n);
        for(int i=0;i<n;i++){
            int u=edges[i][0];
            int v=edges[i][1];
            if(!dsu.unionSet(u,v)){
                return edges[i];
            }
        }
        return {};
    }
};