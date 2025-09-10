class Solution{
public:
    int minimumTeachings(int n,vector<vector<int>>&languages,vector<vector<int>>&friendships){
        int m=languages.size();
        vector<unordered_set<int>>know(m);
        for(int i=0;i<m;++i){
            for(int x:languages[i]){
                know[i].insert(x);
            }
        }
        unordered_set<int>bad;
        for(auto&f:friendships){
            int u=f[0]-1;
            int v=f[1]-1;
            bool ok=0;
            for(int x:know[u]){
                if(know[v].count(x)){
                    ok=1;
                    break;
                }
            }
            if(!ok){
                bad.insert(u);
                bad.insert(v);
            }
        }
        if(bad.empty()){
            return 0;
        }
        int ans=INT_MAX;
        for(int lang=1;lang<=n;++lang){
            int c=0;
            for(int u:bad){
                if(!know[u].count(lang)){
                    ++c;
                }
            }
            ans=min(ans,c);
        }
        return ans;
    }
};
