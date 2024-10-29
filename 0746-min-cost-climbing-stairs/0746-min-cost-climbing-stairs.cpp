class Solution {
public:
    int minCostClimbingStairs(vector<int>& c) {
        int p1=0,p2=0;
        for(int i=2;i<=c.size();i++){
            int curr;
            if(p1+c[i-1]<p2+c[i-2]){
                curr=p1+c[i-1];
            }
            else{
                curr=p2+c[i-2];
            }
            p2=p1;
            p1=curr;
        }
        return p1;
    }
};
