class Solution {
public:
    int numBusesToDestination(vector<vector<int>>& routes, int source, int target) {
        if(source==target){
            return 0;
        }
        int n=routes.size();
        int m=routes[0].size();
        //for all the dirns in all 4 (left,right,top,bottom)
        int dx[4]={0,1,-1,0};
        int dy[4]={1,-1,0,0};
        queue<int> q;
        unordered_map<int, vector<int>> mp;
        for(int i=0;i<n;i++){
            for(int x: routes[i]){
                mp[x].push_back(i);
            }
        }
        vector<int> vis(n,0);
        unordered_set<int> seen;
        for(int b: mp[source]){ 
            q.push(b); 
            vis[b]=1; 
        }
        while(!q.empty()){
            int b=q.front(); 
            q.pop();
            for(int stop: routes[b]){
                if(stop==target){
                    return vis[b];
                }
                if(seen.count(stop)){
                    continue;
                }
                seen.insert(stop);
                for(int nb: mp[stop]){
                    if(!vis[nb]){ 
                        vis[nb]=vis[b]+1; 
                        q.push(nb); 
                    }
                }
            }
        }
        return -1;
    }
};
