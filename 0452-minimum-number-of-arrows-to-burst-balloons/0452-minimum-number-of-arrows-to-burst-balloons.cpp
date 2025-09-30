class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& p) {
        int n=p.size();
        sort(p.begin(),p.end());
        int l=p[0][1];
        int cnt=1;
        for(auto pnt:p){
            if(pnt[0]>l){
                cnt++;
                l=pnt[1];
            }
            l=min(pnt[1],l);
        }
        return cnt;
    }
};