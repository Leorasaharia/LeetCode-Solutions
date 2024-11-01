class Solution {
public:
    int minSubArrayLen(int t, vector<int>& n){
        int l=0,s=0,m=INT_MAX;
        for (int r=0;r<n.size();++r){
            s+=n[r];
            while(s>=t){
                m=min(m,r-l+1);
                s-=n[l];
                ++l;
            }
        }
        return m==INT_MAX?0:m;
    }
};