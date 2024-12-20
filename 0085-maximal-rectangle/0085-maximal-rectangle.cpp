class Solution {
public:
    int maximalRectangle(vector<vector<char>>&m){
        if(m.empty()){
            return 0;
        }
        int r=m.size();
        int c=m[0].size();
        int mx=0;
        vector<int>h(c+1,0);
        for(int i=0;i<r;++i){
            for(int j=0;j<c;++j){
                if(m[i][j]=='1'){
                    h[j]++;
                }
                else{
                    h[j]=0;
                }
            }
            stack<int>s;
            for(int j=0;j<=c;++j){
                while(!s.empty()&& h[j]<h[s.top()]){
                    int ht=h[s.top()];
                    s.pop();
                   int w;
                   if(s.empty()){
                    w=j;
                    }
                    else{
                        w=j-s.top()-1;
                    }
                    mx=max(mx,ht*w);
                }
                s.push(j);
            }
        }
        return mx;
    }
};