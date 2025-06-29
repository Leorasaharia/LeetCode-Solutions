class Solution {
public:
    int minSwapsCouples(vector<int>& row) {
        //dfs approach 
        int n=row.size()/2;
        vector<int>pos(row.size()); //pos of each person
        vector<vector<int>>graph(n);   //graph of mismatched couple conns
        vector<int>vis(n,0);     
        for(int i=0;i<row.size();i++){
            pos[row[i]]=i;
        }
        for(int i=0;i<row.size();i+=2){
            int a=row[i]/2;       // 1st person
            int b=row[i+1]/2;     // 2nd person
            if(a!=b){
                graph[a].push_back(b);
                graph[b].push_back(a);
            }
        }
        int cnt=0;
        for(int i=0;i<n;i++){
            if(!vis[i]){
                cnt+=dfs(i,graph,vis)-1;
            }
        }
        return cnt;
    }
    int dfs(int u,vector<vector<int>>&graph,vector<int>&vis){
        vis[u]=1;
        int res=1;
        int dx[2]={0,1}; //dirn array 
        for(int k=0;k<graph[u].size();k++){
            int nx=graph[u][k];
            int dr=nx+dx[0];
            if(!vis[nx]){
                res+=dfs(nx,graph,vis);
            }
        }
        return res;
    }
};
