class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int m=mat.size();
        int n=mat[0].size();
        queue<pair<int,int>>q;
        vector<vector<int>>d(m,vector<int>(n,1e9));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(mat[i][j]==0){
                    d[i][j]=0;
                    q.push({i,j});
                }
            }
        }
        int dx[4]={-1,1,0,0};
        int dy[4]={0,0,-1,1};
        while(q.empty()==0){
            int x=q.front().first;
            int y=q.front().second;
            q.pop();
            for(int i=0;i<4;i++){
                int nx=x+dx[i];
                int ny=y+dy[i];
                if(nx<0||ny<0){
                    continue;
                }
                if(nx>=m||ny>=n){
                    continue;
                }
                if(d[nx][ny]<=d[x][y]+1){
                    continue;
                }
                d[nx][ny]=d[x][y]+1;
                q.push({nx,ny});
            }
        }
        return d;
    }
};