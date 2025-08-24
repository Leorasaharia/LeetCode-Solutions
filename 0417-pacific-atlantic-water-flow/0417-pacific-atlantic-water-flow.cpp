class Solution {
public:
    int r,c;  
    vector<vector<int>>res;  
    int dx[4]={1,-1,0,0}; 
    int dy[4]={0,0,1,-1};
    void dfs(int r,int c,vector<vector<int>>& heights,vector<vector<int>>& vis){
        vis[r][c]=1;
        for(int k=0;k<4;k++)
            int nr=r+dx[k];
            int nc=c+dy[k];
            if(nr<0 ||nc<0||nr>=r||nc>=c){
                continue;
            }
            if(vis[nr][nc]){
                continue;
            }
            if(heights[nr][nc]<heights[r][c]){
                continue;
            }
            dfs(nr,nc,heights,vis);
        }
    }
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
        r=heights.size();
        c=heights[0].size();
        vector<vector<int>> pac(r, vector<int>(c,0));
        vector<vector<int>> atlan(r, vector<int>(c,0));
        for(int i=0;i<r;i++){
            dfs(i,0,heights,pac);
            dfs(i,c-1,heights,atlan);
        }
        for(int j=0;j<c;j++){
            dfs(0,j,heights,pac);     
            dfs(r-1,j,heights,atlan);  
        }
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(pac[i][j] && atlan[i][j]){
                    res.push_back({i,j});
                }
            }
        }
        return res;
    }
};
