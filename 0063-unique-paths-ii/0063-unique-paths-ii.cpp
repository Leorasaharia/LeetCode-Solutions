class Solution {
public:
    unordered_map<int,int>m;
    int f(vector<vector<int>>&o,int i,int j){
        if(i<0||j<0||o[i][j]){
            return 0;
        }
        if(!i&&!j){
            return 1;
        }
        int k=i*200+j; 
        if(m.count(k)){
            return m[k];
        }
        return m[k]=f(o,i-1,j)+f(o,i,j-1);
    }
    int uniquePathsWithObstacles(vector<vector<int>>&o){
        return f(o,o.size()-1,o[0].size()-1);
    }
};
