class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& g) {
        int n=g.size();
        int s=(n*n*(n*n+1))/2;
        int gs=0;
        int r=-1;
        unordered_map<int,int> m;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                int x=g[i][j];
                gs+=x;
                if(m[x]++){
                    r=x;
                }
            }
        }
        return {r,s-(gs-r)};
    }
};
