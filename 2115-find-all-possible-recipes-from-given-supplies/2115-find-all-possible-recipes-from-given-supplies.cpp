class Solution{
public:
    vector<string> findAllRecipes(
        vector<string>&r,
        vector<vector<string>>&i,
        vector<string>&s){
        int n=r.size();
        unordered_map<string,int>m;
        for(int x=0;x<n;x++){
            m[r[x]]=x;
        }
        unordered_set<string>st;
        for(auto&a:s){
            st.insert(a);
        }
        vector<vector<int>>g(n);
        vector<int>d(n);
        for(int x=0;x<n;x++){
            d[x]=i[x].size();
            for(auto&a:i[x]){
                if(m.count(a)){
                    g[m[a]].push_back(x);
                }
            }
        }
        queue<int>q;
        for(int x=0;x<n;x++){
            for(auto&a:i[x]){
                if(st.count(a)){
                    d[x]--;
                }
            }
            if(d[x]==0){
                q.push(x);
            }
        }
        vector<string>ans;
        while(q.empty()==0){
            int u=q.front();
            q.pop();
            ans.push_back(r[u]);
            for(int v:g[u]){
                d[v]--;
                if(d[v]==0){
                    q.push(v);
                }
            }
        }
        return ans;
    }
};
