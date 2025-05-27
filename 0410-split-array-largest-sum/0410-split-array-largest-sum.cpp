class Solution {
public:
    int splitArray(vector<int>&a,int k) {
        int n=a.size();
        if(k>n){
            return -1;
        }
        int mn=INT_MAX;
        long long t=1LL<<(n-1);
        for(long long m=0;m<t;m++){
            int s=0;
            for(int i=0;i<n-1;i++)
                if(m&(1LL<<i)){
                    s++;
                }
            if(s!=k-1){
                continue;
            }
            int mx=0,c=0;
            for(int i=0;i<n;i++){
                c+=a[i];
                if(i==n-1||(m&(1LL<<i))){
                    if(c>mx){
                        mx=c;
                    }
                    c=0;
                }
            }
            if(mx<mn){
                mn=mx;
            }
        }
        return mn;
    }
};
