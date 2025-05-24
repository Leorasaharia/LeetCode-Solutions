class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& a, int sr, int sc, int col) {
        int m=a.size();
        int n=a[0].size();
        int old=a[sr][sc];
        if(old==col){
            return a;
        }
        a[sr][sc]=col;
        bool nw=true;
        while(nw){
            nw=false;
            vector<pair<int,int>> tmp;
            for(int i=0;i<m;i++){
                for(int j=0;j<n;j++){
                    if(a[i][j]==col){
                        if(i>0&&a[i-1][j]==old){
                            tmp.push_back({i-1,j});
                        }
                        if(i<m-1&&a[i+1][j]==old){
                            tmp.push_back({i+1,j});
                        }
                        if(j>0&&a[i][j-1]==old){
                            tmp.push_back({i,j-1});
                        }
                        if(j<n-1&&a[i][j+1]==old){
                            tmp.push_back({i,j+1});
                        }
                    }
                }
            }
            for(auto& p:tmp){
                a[p.first][p.second]=col;
                nw=true;
            }
        }
        return a;
    }
};
