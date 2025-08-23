class Solution {
public:
    int orangesRotting(vector<vector<int>>&grid) {
        int m=grid.size();
        int n=grid[0].size();
        int time=0,nw=0;
        while(1){
            nw=0;
            vector<vector<int>>temp=grid;
            for(int i=0;i<m;i++){
                for(int j=0;j<n;j++){
                    if(grid[i][j]==2){
                        if(i>0&&grid[i-1][j]==1){
                            temp[i-1][j]=2;
                            nw++;
                        }
                        if(j>0&&grid[i][j-1]==1){
                            temp[i][j-1]=2;
                            nw++;
                        }
                        if(i+1<m&&grid[i+1][j]==1){
                            temp[i+1][j]=2;
                            nw++;
                        }
                        if(j+1<n&&grid[i][j+1]==1){
                            temp[i][j+1]=2;
                            nw++;
                        }
                    }
                }
            }
            if(nw==0){
                break;
            }
            grid=temp;
            time++;
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==1){
                    return -1;
                }
            }
        }
        return time;
    }
};
