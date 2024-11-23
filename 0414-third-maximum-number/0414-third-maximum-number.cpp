class Solution{
public:
    int thirdMax(vector<int>&n){
        set<int>s(n.begin(),n.end());
        vector<int>v(s.begin(),s.end());
        reverse(v.begin(),v.end());
        return v.size()<3?v[0]:v[2];
    }
};