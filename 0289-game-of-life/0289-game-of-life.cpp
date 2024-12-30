class Solution {
public:
    void gameOfLife(vector<vector<int>>& b) {
        int m=b.size();
        int n=b[0].size();
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                int c=0;
                for(int x=-1;x<=1;x++){
                    for(int y=-1;y<=1;y++){
                        if(x==0&&y==0){
                            continue;
                        }
                        int ni=i+x;
                        int nj=j+y;
                        bool v=(ni>=0&&nj>=0&&ni<m&&nj<n);
                        if(v&&(b[ni][nj]==1||b[ni][nj]==-1)){
                            c++;
                        }
                    }
                }
                if(b[i][j]==1&&(c<2||c>3)){
                    b[i][j]=-1;
                }
                if(b[i][j]==0&&c==3){
                    b[i][j]=2;
                }
            }
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(b[i][j]==-1){
                    b[i][j]=0;
                }
                if(b[i][j]==2){
                    b[i][j]=1;
                }
            }
        }
    }
};
