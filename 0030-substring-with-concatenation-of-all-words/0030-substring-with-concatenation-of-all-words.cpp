class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& w) {
        vector<int> r;
        if(s.empty()||w.empty())
            return r;
        int l=w[0].length();
        int t=w.size();
        int n=l*t;
        if(n>s.length())
            return r;
        unordered_map<string,int>m;
        for(auto& x:w){
            m[x]++;
        }
        for(int i=0;i< l;i++){
            int lf=i, cnt=0;
            unordered_map<string, int>c;
            for(int j=i;j<=s.length()-l;j +=l){
                string v=s.substr(j,l);
                if(m.find(v)!=m.end() ){
                    c[v]++;
                    cnt ++;  
                    while(c[v]>m[v]){
                        string p=s.substr(lf,l);
                        c[p]--;
                        cnt--;
                        left += l;
                    }
                    if(cnt ==t){
                        r.push_back(lf);
                        string p=s.substr(lf,l);
                        c[p]--;
                        cnt--;
                        lf+=l;
                    }
                }else{
                    c.clear();
                    cnt=0;
                    lf=j+l;
                }
            }
        }
        return r;
    }
};