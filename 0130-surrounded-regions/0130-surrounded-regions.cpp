class Solution {
public:
    void solve(vector<vector<char>>& board) {
        int m=board.size();
        int n=board[0].size();
        queue<pair<int,int>> q;
        for(int i=0;i<m;i++){
            if(board[i][0]=='O'){
                q.push({i,0});
            }
            if(board[i][n-1]=='O'){
                q.push({i,n-1});
            }
        }
        for(int j=0;j<n;j++){
            if(board[0][j]=='O'){
                q.push({0,j});
            }
            if(board[m-1][j]=='O'){
                q.push({m-1,j});
            }
        }
        int dx[]={1,-1,0,0};
        int dy[]={0,0,1,-1};
        while(!q.empty()){
            int x=q.front().first;
            int y=q.front().second;
            q.pop();
            if(x<0||x>=m||y<0||y>=n||board[x][y]!='O'){
                continue;
            }
            board[x][y]='#';
            for(int d=0;d<4;d++){
                int nx=x+dx[d];
                int ny=y+dy[d];
                if(nx>=0&&nx<m&&ny>=0&&ny<n&&board[nx][ny]=='O'){
                    q.push({nx,ny});
                }
            }
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(board[i][j]=='O'){
                    board[i][j]='X';
                }
                else if(board[i][j]=='#'){
                    board[i][j]='O';
                }
            }
        }
    }
};
