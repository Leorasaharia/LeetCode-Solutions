class Solution {
public:
    int dfs(int u,int p,int d,int k,vector<vector<int>>&g){
        if(d>k){
            return 0;
        }
        int c=1;
        int n=g[u].size();
        for(int i=0;i<n;i++){
            int v=g[u][i];
            if(v!=p){
                c+=dfs(v,u,d+1,k,g);
            }
        }
        return c;
    }
    vector<int> maxTargetNodes(vector<vector<int>>&e1, vector<vector<int>>&e2, int k){
        int n=e1.size()+1;
        int m=e2.size()+1;
        vector<vector<int>>g1(n),g2(m);
        for(int i=0;i<e1.size();i++){
            int a=e1[i][0];
            int b=e1[i][1];
            g1[a].push_back(b);
            g1[b].push_back(a);
        }
        for(int i=0;i<e2.size();i++){
            int a=e2[i][0];
            int b=e2[i][1];
            g2[a].push_back(b);
            g2[b].push_back(a);
        }
        int max_t2=0;
        for(int i=0;i<m;i++)
            max_t2=max(max_t2,dfs(i,-1,0,k-1,g2));
        vector<int>r(n);
        for(int i=0;i<n;i++)
            r[i]=dfs(i,-1,0,k,g1)+max_t2;
        return r;
    }
};
