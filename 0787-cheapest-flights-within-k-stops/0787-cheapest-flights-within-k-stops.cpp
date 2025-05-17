class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        vector<int> cost(n,INT_MAX);
        cost[src]=0;
        for(int i=0;i<=k;i++){
            vector<int>temp=cost;
            int f=flights.size();
            for(int j=0;j<f;j++) {
                int u=flights[j][0];
                int v=flights[j][1];
                int w=flights[j][2];
                if(cost[u]!=INT_MAX && cost[u]+[w]<temp[v]){
                    temp[v]=cost[u]+w;
                }
            }
            cost=temp;
        }
        if(cost[dst]==INT_MAX){
            return -1;
        }else{
            return cost[dst];
        }
    }
};
