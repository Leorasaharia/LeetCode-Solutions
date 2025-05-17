class Solution{
public:
    vector<int> findOrder(int n, vector<vector<int>>& pre){
        vector<vector<int>> g(n, vector<int>(n,0));
        vector<int> d(n,0), res;
        vector<bool> vis(n,0);
        int p=pre.size();
        for(int i=0;i<p;i++){
            int a=pre[i][0];
            int b=pre[i][1];
            g[b][a]=1;
            d[a]++;
        }
        int doner=0;
        while(done<n){
            bool freq=0;
            for(int i=0;i<n;i++){
                if(!vis[i] && d[i]==0){
                    vis[i]=1;
                    res.push_back(i);
                    for(int j=0;j<n;j++){
                        if(g[i][j]){
                            d[j]--;
                        }
                    }
                    freq=1;
                    done++;
                    break;
                }
            }
            if(freq==0){
                return {};
            }
        }
        return res;
    }
};
