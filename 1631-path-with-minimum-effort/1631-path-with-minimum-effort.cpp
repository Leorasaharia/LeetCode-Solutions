class Solution{
public:
    int n,m;
    //for all the dirns among each adjacent paths for the cell in the directions
    int dx[4]={-1,0,1,0};
    int dy[4]={0,1,0,-1};
    bool valid(int k,vector<vector<int>>&heights){
        queue<pair<int,int>>q;
        vector<vector<int>>vis(n,vector<int>(m,0));
        q.push({0,0});
        vis[0][0]=1;
        while(!q.empty()){ //push when short dist is found in cells
            int row=q.front().first;
            int col=q.front().second;
            q.pop();
            if(row==n-1 && col==m-1){
                return true;
            }
            for(int dir=0;dir<4;dir++){
                int nr=row+dx[dir];
                int nc=col+dy[dir];
                if(nr<0||nc>=n){
                    continue;
                }
                if(nc<0||nr>=m){
                    continue;
                }
                if(vis[nr][nc]){
                    continue;
                }
                if(abs(heights[nr][nc]-heights[row][col])>k){
                    continue;
                }
                vis[nr][nc]=1;
                q.push({nr,nc});
            }
        }
        return false;
    }
    int minimumEffortPath(vector<vector<int>>&heights){
        n=heights.size();
        m=heights[0].size();
        int beg=0;
        int end=INT_MAX;
        int res=0;
        while(beg<=end){
            int mid=beg+(end-beg)/2;
            if(valid(mid,heights)){
                res=mid;
                end=mid-1;
            }
            else{
                beg=mid+1;
            }
        }
        return res;
    }
};
