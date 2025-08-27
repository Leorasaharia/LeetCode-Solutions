class Solution {
public:
    class DSU {
    private:
        vector<int> p;
        vector<int> r;
    public:
        DSU(int n) {
            p.resize(n);
            r.resize(n,0);
            for(int i=0;i<n;i++){
                p[i]=i;
            }
        }
        int f(int x){
            if(p[x]!=x){
                p[x]=f(p[x]);
            }
            return p[x];
        }
        void u(int x,int y) {
            int rx=f(x);
            int ry=f(y);
            if(rx==ry){
                return;
            }
            if(r[rx]<r[ry]){
                p[rx]=ry;
            }
            else if(r[rx]>r[ry]){
                p[ry]=rx;
            }
            else{
                p[ry]=rx;
                r[rx]++;
            }
        }
    };
    vector<bool> friendRequests(int n, vector<vector<int>>& rest, vector<vector<int>>& req) {
        DSU dsu(n);
        vector<bool> ans;
        for(auto& q:req) {
            int u=q[0],v=q[1];
            int ru=dsu.f(u);
            int rv=dsu.f(v);
            if(ru==rv){
                ans.push_back(true);
                continue;
            }
            bool ok=true;
            for(auto& e:rest){
                int x=e[0];
                int y=e[1];
                int rx=dsu.f(x);
                int ry=dsu.f(y);
                if((rx==ru&&ry==rv)||(rx==rv&&ry==ru)){
                    ok=false;
                    break;
                }
            }
            if(ok){
                dsu.u(u,v);
                ans.push_back(true);
            }else{
                ans.push_back(false);
            }
        }
        return ans;
    }
};