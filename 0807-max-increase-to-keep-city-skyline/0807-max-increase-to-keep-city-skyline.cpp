class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
        int n=grid.size();
        vector<int>row(n,0),col(n,0);
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                row[i]=max(row[i],grid[i][j]);
                col[j]=max(col[j],grid[i][j]);
            }
        }
        int res=0;
        int dx[4]={0,0,1,-1};
        int dy[4]={1,-1,0,0};
        for(int x=0;x<n;x++){
            for(int y=0;y<n;y++){
                int ans=min(row[x],col[y]);
                if(grid[x][y]<ans){
                    res+=ans-grid[x][y];
                }
            }
        }
        return res;
    }
};
