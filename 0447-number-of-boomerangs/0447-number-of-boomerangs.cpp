class Solution {
public:
    int numberOfBoomerangs(vector<vector<int>>& p) {
        int n=p.size(),ans=0;
        for(int i=0;i<n;++i){
            unordered_map<int,int> m;
            for(int j=0;j<n;++j){
                int dx=p[i][0]-p[j][0];
                int dy=p[i][1]-p[j][1];
                int d=dx*dx+dy*dy;
                if(m.find(d)!=m.end()){
                    m[d]++;
                }
                else{
                    m[d]=1;
                }
            }
            int ks=m.size();
            int idx=0;
            int dist[500],cnt[500];
            for(int j=0;j<n;++j){
                int dx=p[i][0]-p[j][0];
                int dy=p[i][1]-p[j][1];
                int d=dx*dx+dy*dy;
                bool found=0;
                for(int k=0;k<idx;++k){
                    if(dist[k]==d){
                        found=1;
                        break;
                    }
                }
                if(!found){
                    dist[idx]=d;
                    cnt[idx]=m[d];
                    idx++;
                }
            }
            for(int k=0;k<idx;++k){
                int c=cnt[k];
                ans+=c*(c-1);
            }
        }
        return ans;
    }
};
