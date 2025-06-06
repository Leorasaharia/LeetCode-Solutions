class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        if(grid[0][0]||grid[n-1][m-1]){
            return -1;
        }
        //direction indices all dirns
        int dr[8]={-1,-1,-1,0,0,1,1,1};
        int dc[8]={-1,0,1,-1,1,-1,0,1};
        //array to check the visisted nodes
        vector<vector<int>>vis(n,vector<int>(m,0));
        queue<pair<int,int>> q;
        q.push({0,0}); //initial
        vis[0][0]=1;//visited
        int dist=1;
        while(!q.empty()){
            int sz=q.size();
            while(sz--){
                int row=q.front().first;
                int col=q.front().second; 
                q.pop();
                if(row==n-1 && col==m-1){
                    return dist; //returning curr path distance
                }
                for(int dir=0;dir<8;dir++){
                    int nr=row+dr[dir];
                    int nc=col+dc[dir];
                    if(nr<0||nr>=n || nc<0||nc>=m){
                        continue; //outside bounds
                    }
                    if(vis[nr][nc]||grid[nr][nc]){
                        continue; //skip already visited
                    }
                    vis[nr][nc]=1;
                    q.push({nr,nc});
                }
            }
            dist++;
        }
        return -1;
    }
};
