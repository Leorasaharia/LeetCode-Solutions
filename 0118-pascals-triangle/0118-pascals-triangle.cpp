class Solution {
public:
    vector<vector<int>> generate(int n){
        vector<vector<int>> r;
        for(int i=0;i<n;i++){
            vector<int> row(i+1,1);
            for(int j=1;j<i;j++){
                row[j]=r[i-1][j-1] + r[i-1][j];
            }
            r.push_back(row);
        }
        return r;
    }
};
