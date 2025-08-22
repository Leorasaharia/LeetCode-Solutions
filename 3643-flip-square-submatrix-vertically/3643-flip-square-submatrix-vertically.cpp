class Solution{
public:
    vector<vector<int>> reverseSubmatrix(vector<vector<int>>& grid,int x,int y,int k){
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>> ans=grid,vis(n,vector<int>(m,0));
        //directions in all 4, applying bfs traversal
        int dx[4]={1,-1,0,0};
        int dy[4]={0,0,1,-1};
        queue<pair<int,int>> q;
        q.push({x,y});
        vis[x][y]=1;
        while(!q.empty()){
            auto rc=q.front();
            q.pop();
            int r=rc.first;
            int c=rc.second;
            int mr=x+(k-1)-(r-x);
            ans[mr][c]=grid[r][c];
            for(int d=0;d<4;d++){
                int nr=r+dx[d];
                int nc=c+dy[d];
                if(nr>=x && nr<x+k && nc>=y && nc<y+k && !vis[nr][nc]){
                    vis[nr][nc]=1;
                    q.push({nr,nc});
                }
            }
        }
        return ans;
    }
};
