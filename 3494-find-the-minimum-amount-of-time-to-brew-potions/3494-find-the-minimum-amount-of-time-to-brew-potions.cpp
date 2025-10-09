class Solution{
public:
    long long minTime(vector<int>&skill,vector<int>&mana){
        int n=skill.size();
        int m=mana.size();
        vector<long long>d(n,0);
        long long ans=0;
        for(int j=0;j<m;++j){
            long long cur=0;
            for(int i=0;i<n;++i){
                cur=max(cur,d[i])+1LL*skill[i]*mana[j];
                d[i]=cur;
            }
            for(int i=n-2;i>=0;--i)
                d[i]=d[i+1]-1LL*skill[i+1]*mana[j];
            ans=d[n-1];
        }
        return ans;
    }
};
