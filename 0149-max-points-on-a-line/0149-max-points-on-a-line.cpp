class Solution {
public:
    int maxPoints(vector<vector<int>>& a) {
        int n = a.size();
        int res = 1;
        for(int i = 0; i < n; ++i) {
            for(int j = i+1; j < n; ++j) {
                int cnt = 2;
                int x1 = a[i][0];
                int y1 = a[i][1];
                int x2 = a[j][0];
                int y2 = a[j][1];
                for(int k = 0; k < n; ++k) {
                    if(k == i || k == j){
                        continue;
                    }
                    int x3 = a[k][0];
                    int y3 = a[k][1];
                    if((y2 - y1)*(x3 - x1) == (y3 - y1)*(x2 - x1)){
                        cnt++;
                    }
                }
                res = max(res, cnt);
            }
        }
        return re;
    }
};
