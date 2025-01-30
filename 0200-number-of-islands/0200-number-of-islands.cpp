int dr[]={1,0,-1,0};
int dc[]={0,1,0,-1};
class Solution {
public:
    int n,m;
    bool isValid(int r,int c) {
        if(r<0||r>=n||c<0||c>=m) return false;
        return true;
    }
    void dfs(vector<vector<char>>& g,int r,int c){
        g[r][c]='0';
        for(int i=0;i<4;i++){
            if(isValid(r+dr[i],c+dc[i])&&g[r+dr[i]][c+dc[i]]=='1'){
                dfs(g,r+dr[i],c+dc[i]);
            }
        }
    }
    int numIslands(vector<vector<char>>& grid){
        n=grid.size();
        m=grid[0].size();
        int ans=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]=='1'){
                    ans++;
                    dfs(grid,i,j);
                }
            }
        }
        return ans;
    }
};
