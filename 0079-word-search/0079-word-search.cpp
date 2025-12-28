class Solution {
public:
    struct Node {
        int x;
        int y;
        int k;
        string vis;
    };
    bool exist(vector<vector<char>>& b, string w) {
        int m = b.size();
        int n = b[0].size();
        int cnt[128]={0};
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                cnt[b[i][j]]++;
            }
        }
        for(int i=0;i<w.size();i++){
            cnt[w[i]]--;
            if(cnt[w[i]]<0)
                return false;
        }
        if(cnt[w[0]] > cnt[w[w.size()-1]]){
            int l=0,r=w.size()-1;
            while(l<r){
                char t=w[l];
                w[l]=w[r];
                w[r]=t;
                l++; r--;
            }
        }
        int d[4][2]={{1,0},{-1,0},{0,1},{0,-1}};
        queue<Node> q;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(b[i][j]==w[0]){
                    string v(m*n,'0');
                    v[i*n+j]='1';
                    Node t;
                    t.x=i;
                    t.y=j;
                    t.k=1;
                    t.vis=v;
                    q.push(t);
                }
            }
        }
        while(!q.empty()){
            Node cur=q.front();
            q.pop();
            if(cur.k==w.size())
                return true;
            for(int i=0;i<4;i++){
                int nx=cur.x+d[i][0];
                int ny=cur.y+d[i][1];
                if(nx<0 || ny<0 || nx>=m || ny>=n)
                    continue;
                int id=nx*n+ny;
                if(cur.vis[id]=='1')
                    continue;
                if(b[nx][ny]!=w[cur.k])
                    continue;
                Node nxt;
                nxt.x=nx;
                nxt.y=ny;
                nxt.k=cur.k+1;
                nxt.vis=cur.vis;
                nxt.vis[id]='1';
                q.push(nxt);
            }
        }
        return false;
    }
};
