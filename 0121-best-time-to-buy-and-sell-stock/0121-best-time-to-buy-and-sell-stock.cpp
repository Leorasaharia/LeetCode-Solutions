class Solution {
public:
    int maxProfit(vector<int>& prices){
        int n=prices.size();
        int maxp=INT_MAX;
        int prof=0;
        for(int i=0; i<n;i++){
            maxp=min(maxp,prices[i]);
            prof=max(prof,prices[i]-maxp);
        }
        return prof;
    }
};

