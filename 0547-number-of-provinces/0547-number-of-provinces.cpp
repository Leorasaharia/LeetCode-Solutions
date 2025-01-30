class Solution {
public:
    void dfs(int i,vector<vector<int>>&g,vector<bool>&v){
        v[i]=true;
        for(int j=0;j<g.size();j++){
            if(g[i][j]==1&&!v[j]){
                dfs(j,g,v);
            }
        }
    }
    int findCircleNum(vector<vector<int>>&g){
        int n=g.size(),c=0;
        vector<bool>v(n,false);
        for(int i=0;i<n;i++){
            if(!v[i]){
                dfs(i,g,v);
                c++;
            }
        }
        return c;
    }
};
