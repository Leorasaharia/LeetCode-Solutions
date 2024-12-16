#define vii vector
class Solution {
public:
    vii<vii<string>>groupAnagrams(vii<string>&s){
        vii<pair<string,string>>p;
        for(string t:s){
            string x=t;
            sort(x.begin(),x.end());
            p.push_back({x,t});
        }
        sort(p.begin(),p.end());
        vii<vii<string>>r;
        vii<string>g;
        for(int i=0;i<p.size();++i){
            if(i==0||p[i].first!=p[i-1].first){
                if(!g.empty())r.push_back(g);
                g.clear();
            }
            g.push_back(p[i].second);
        }
        if(!g.empty())r.push_back(g);
        return r;
    }
};
