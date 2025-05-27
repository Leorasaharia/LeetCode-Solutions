class Solution {
public:
    int splitArray(vector<int>&a,int k) {
        int n=a.size();
        if(k>n){
            return -1;
        }
        int mn=INT_MAX;
        int t=1<<(n-1);
        for(int m=0;m<t;m++){
            int s=0;
            for(int i=0;i<n-1;i++){
                if(m&(1<<i)){
                    s++;
                }
            }
            if(s==k-1){
                int mx=0,c=0;
                for(int i=0;i<n;i++){
                    c+=a[i];
                    if(i==n-1||(m&(1<<i))){
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
        }
        return mn;
    }
};
