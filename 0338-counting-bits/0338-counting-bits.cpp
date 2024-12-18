#define loop(i,n) for(int i=0;i<=n;++i)
class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans(n+1);
        loop(i,n){
            ans[i]=ans[i>>1]+(i&1);
        }
        return ans;
    }
};
