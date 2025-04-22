class Solution {
public:
    vector<string> findRelativeRanks(vector<int>&s) {
        int n=s.size();
        vector<int>t=s;
        sort(t.rbegin(),t.rend());
        unordered_map<int,string>m;
        for(int i=0;i<n;i++) {
            if(i==0)m[t[i]]="Gold Medal";
            else if(i==1)m[t[i]]="Silver Medal";
            else if(i==2)m[t[i]]="Bronze Medal";
            else m[t[i]]=to_string(i+1);
        }
        vector<string>r;
        for(int x:s)r.push_back(m[x]);
        return r;
    }
};
