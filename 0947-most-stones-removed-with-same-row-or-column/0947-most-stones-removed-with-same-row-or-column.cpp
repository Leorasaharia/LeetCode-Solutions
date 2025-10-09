class Solution {
public:
    int removeStones(vector<vector<int>>& stones) {
        int n=stones.size();
        vector<vector<int>> adj(n);
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(stones[i][0]==stones[j][0] || stones[i][1]==stones[j][1]){
                    adj[i].push_back(j);
                    adj[j].push_back(i);
                }
            }
        }
        vector<int> vis(n);
        int cnt=0;
        for(int i=0;i<n;i++){
            if(vis[i]==0){
            cnt++;
            }
        }
         queue<int> q; 
         q.push(i); 
         vis[i]=1;
            while(q.empty()==0){
                int fr=q.front();
                q.pop();
                for(int y:adj[x]){
                    if(vis[y]!=0){
                        vis[y]=1;
                        q.push(y);
                    }
                }
            }
            return n-cnt;
        }
    }
};