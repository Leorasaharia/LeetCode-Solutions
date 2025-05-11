class Solution {
public:
    long long findeqn(pair<int,int>&p1, pair<int,int>&p2, pair<int,int>p3) {
        long long x1=p1.first,x2=p2.first,x3=p3.first;
        long long y1=p1.second,y2=p2.second,y3=p3.second;
        return (y3-y2)*(x2-x1)-(y2-y1)*(x3-x2);
    }

    vector<vector<int>> outerTrees(vector<vector<int>>& t) {
        sort(begin(t), end(t));
        deque<pair<int,int>> u,l;
        for(auto& p:t){
            while(l.size()>=2 && findeqn(l[l.size()-2],l[l.size()-1],{p[0],p[1]})<0){
                l.pop_back();
            }
            while(u.size()>=2 && findeqn(u[u.size()-2],u[u.size()-1],{p[0],p[1]})>0){
                u.pop_back();
            }
            l.push_back({p[0],p[1]});
            u.push_back({p[0],p[1]});
        }
        set<pair<int,int>> s;
        for(auto& p:l){
            s.insert(p);
        }
        for(auto& p:u){
            s.insert(p);
        }
        vector<vector<int>> r;
        for(auto& p:s){
            r.push_back({p.first,p.second});
        }
        return r;
    }
};
