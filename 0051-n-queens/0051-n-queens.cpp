class Solution {
public:
    vector<vector<string>>res;
    bool isSafe(int row,int col,vector<string>&board,int n){
        for(int i=0;i<row;i++){
            if(board[i][col]=='Q'){
                return false;
            }
        }
        int i=row-1,j=col-1;
        while(i>=0&&j>=0){
            if(board[i][j]=='Q'){
                return false;
            }
            i--;
            j--;
        }
        i=row-1;
        j=col+1;
        while(i>=0&&j<n){
            if(board[i][j]=='Q'){
                return false;
            }
            i--;
            j++;
        }
        return true;
    }
    void placeQueens(int row,vector<string>&board,int n){
        if(row==n){
            res.push_back(board);
            return;
        }
        for(int col=0;col<n;col++){
            if(isSafe(row,col,board,n)){
                board[row][col]='Q';
                placeQueens(row+1,board,n);
                board[row][col]='.';
            }else{
                continue;
            }
        }
    }
    vector<vector<string>> solveNQueens(int n){
        vector<string>board;
        for(int i=0;i<n;i++){
            string row="";
            for(int j=0;j<n;j++){
                row+='.';
            }
            board.push_back(row);
        }
        placeQueens(0,board,n);
        return res;
    }
};
