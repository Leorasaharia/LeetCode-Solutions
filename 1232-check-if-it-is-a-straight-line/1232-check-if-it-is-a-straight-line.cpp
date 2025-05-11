class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& c) {
        int n=c.size();
        int y=c[1][1]-c[0][1];
        int x=c[1][0]-c[0][0];
        for(int i=2;i<n;i++){
            int yi=c[i][1]-c[0][1];
            int xi=c[i][0]-c[0][0];
            if(yi*x!=xi*y){
               return false; 
            }
        }
        return true;
    }
};