class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& b){
        vector<unordered_set<char>> r(9),c(9),x(9);
        for (int i=0;i<9;i++){
            for (int j=0;j<9;j++){
                char z=b[i][j];
                if(z=='.')
                    continue;
                int k=(i/3)*3+j/3;
                if (r[i].count(z)||c[j].count(z)||x[k].count(z))
                    return false;
                r[i].insert(z);
                c[j].insert(z);
                x[k].insert(z);
            }
        }
        return true;
    }
};
