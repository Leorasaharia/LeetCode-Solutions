class Solution {
public:
    double largestSumOfAverages(vector<int>&a,int k){
        int n=a.size();
        vector<double>pre(n+1,0);
        for(int i=0;i<n;i++){
            pre[i+1]=pre[i]+a[i];
        }
        vector<double>dp(n,0);
        for(int i=0;i<n;i++){
            dp[i]=(pre[n]-pre[i])/(n-i);
        }
        for(int t=1;t<k;t++){
            vector<double>ndp(n,0);
            for(int i=0;i<n;i++){
                for(int j=i+1;j<=n;j++){
                    double avg=(pre[j]-pre[i])/(j-i);
                    ndp[i]=max(ndp[i],avg+dp[j]);
                }
            }
            dp=ndp;
        }
        return dp[0];
    }
};