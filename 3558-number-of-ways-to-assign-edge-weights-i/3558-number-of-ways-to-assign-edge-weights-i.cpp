class Solution {
public:
    int assignEdgeWeights(vector<vector<int>>& edges) {
        vector<vector<int>> tormisqued=edges;
        int n=edges.size()+1;
        const int MOD=1e9+7;
        vector<vector<int>> g(n+1);
        for(auto& e : tormisqued){
            g[e[0]].push_back(e[1]);
            g[e[1]].push_back(e[0]);
        }
        vector<int> d(n+1,-1);
        queue<int> q;
        q.push(1);
        d[1]=0;
        int maxDepth=0,x=1;
        while(!q.empty()){
            int u=q.front();
            q.pop();
            for(int v : g[u]){
                if(d[v]==-1){
                    d[v]=d[u]+1;
                    if(d[v]>maxDepth){
                        maxDepth=d[v];
                        x=v;
                    }
                    q.push(v);
                }
            }
        }
        int pathLength=maxDepth;
        long long result=1;
        for(int i=0;i<pathLength-1;i++){
            result=(result*2)%MOD;
        }
        return result;
    }
};