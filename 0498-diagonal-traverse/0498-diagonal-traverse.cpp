class Solution {
public:
    vector<int> ans;
    int m,n;
    void dfs(vector<vector<int>>& mat, int i, int j, bool up){
        ans.push_back(mat[i][j]);
        if(i==m-1 && j==n-1){//agar last element reached, then recursion stop
            return;
        }
        if(up){ //to travrese in up-right dirn
            if(j==n-1){
                dfs(mat,i+1,j,up=0);
            }
            else if(i==0){
                dfs(mat,i,j+1,up=0);
            }
            else{
                dfs(mat,i-1,j+1,up);
            }
        }else{ //in down-left dirn
            if(i==m-1){
                dfs(mat,i,j+1,up=0);
            }
            else if(j==0){
                dfs(mat,i+1,j,up=0);
            }
            else{
                dfs(mat,i+1,j-1,up);
            }
        }
    }
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        m=mat.size(); 
        n=mat[0].size();
        dfs(mat,0,0,true);
        return ans;
    }
};
