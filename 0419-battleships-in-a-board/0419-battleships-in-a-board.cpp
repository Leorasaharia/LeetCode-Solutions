class Solution {
public:
    int countBattleships(vector<vector<char>>& board) {
        int m=board.size();
        int n=board[0].size();
        int cnt=0;
        int dx[4]={1,-1,0,0};
        int dy[4]={0,0,1,-1};
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(board[i][j]=='X'){
                    cnt++;
                    queue<pair<int,int>> q;
                    q.push(make_pair(i,j));
                    board[i][j]='.';
                    while(q.empty()==0){
                        pair<int,int> p=q.front();
                        q.pop();
                        for(int k=0;k<4;k++){
                            int ni=p.first+dx[k];
                            int nj=p.second+dy[k];
                            if(ni>=0 && ni<m && nj>=0 && nj<n && board[ni][nj]=='X'){
                                board[ni][nj]='.';
                                q.push(make_pair(ni,nj));
                            }
                        }
                    }
                }
            }
        }
        return cnt;
    }
};
