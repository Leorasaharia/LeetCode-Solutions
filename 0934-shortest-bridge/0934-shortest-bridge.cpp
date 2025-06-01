class Solution {
public:
    int shortestBridge(vector<vector<int>>& g) {
        int n=g.size();
        int m=g[0].size();
        int i,j;
        vector<pair<int,int>>q;
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                if(g[i][j]==1){
                    dfs(g,i,j,q);
                    i=n; 
                    break;
                }
            }
        }
        int dist=0;
        //now we give directions in x and y so that we can elaborate up down left right direction movemnets
        int dx[4]={1,-1,0,0};
        int dy[4]={0,0,1,-1};
        while(!q.empty()){
            vector<pair<int,int>>nx;
            for (auto &p:q){
                for(int d=0;d<4;d++){
                    int ni=p.first+dx[d];
                    int nj=p.second+dy[d];
                    if(ni<0||ni>=n || nj<0||nj>=m){
                        continue;
                    }
                    //after reaching the second island,. return distance
                    if(g[ni][nj]==1){
                        return dist;
                    }
                    if(g[ni][nj]==0){
                        g[ni][nj]=2;
                        nx.push_back({ni,nj});
                    }
                }
            }
            q=nx;
            dist++;
        }
        return -1;
    }
private:
    void dfs(vector<vector<int>>& g, int i, int j, vector<pair<int,int>>& q){
        int n=g.size();
        int m=g[0].size();
        if(i<0||i>=n || j<0||j>=m || g[i][j]!=1){
            return;
        }
        g[i][j]=2; //visited already
        q.push_back({i,j});
        dfs(g,i+1,j,q);
        dfs(g,i-1,j,q);
        dfs(g,i,j+1,q);
        dfs(g,i,j-1,q);
    }
};
