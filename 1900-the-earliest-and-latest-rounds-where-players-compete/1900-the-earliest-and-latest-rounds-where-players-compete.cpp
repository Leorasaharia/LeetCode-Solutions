/*
func(n,a,b)
    if a>b then swap
    return solve(n,a,b)
func solve(n,a,b)
    if a>b then swap
    if dp[n][a][b] already filled then return
    agar a+b==n+1, return {1,1} and agar a+b>n+1, toh mirror karke solve
    half=(n+1)/2
    m=INF,mxr=0
when a aur b left side mei hai
        loop i=0 to a-1
            loop j=0 to b-a-1
                solve(half, i+1, i+j+2)
                min/max round update
        but if b right side mein hai
        updabte the pos of b as n+1-b

        loop i=0 to a-1:
            loop j=0 to newb-a-1
                solve(half, i+1, i+j+mid+2)
                min/max round update
    finally store dp[n][a][b]={m+1, mxr+1}
    return dp[n][a][b]
*/

class Solution {
public:
    pair<int,int>dp[29][29][29];
    bool vis[29][29][29];
    vector<int>earliestAndLatest(int n,int a,int b){
        if(a>b){
            swap(a,b);
        }
        auto res=solve(n,a,b);
        return{res.first,res.second};
    }
    pair<int,int>solve(int n,int a,int b){
        if(a>b){
            swap(a,b);
        }
        if(vis[n][a][b]){
            return dp[n][a][b];
        }
        vis[n][a][b]=1;
        if(a+b==n+1){
            return dp[n][a][b]={1,1};
        }
        if(a+b>n+1){
            return dp[n][a][b]=solve(n,n+1-b,n+1-a);
        }
        int m=1e9;
        int mxr=0;
        int nh=(n+1)/2;
        if(b<=nh){
            for(int i=0;i<a;++i){
                for(int j=0;j<b-a;++j){
                    auto res=solve(nh,i+1,i+j+2);
                    m=min(m,res.first);
                    mxr=max(mxr,res.second);
                }
            }
        }else{
            int bp=n+1-b;
            int mid=(n-2*bp+1)/2;
            for(int i=0;i<a;++i){
                for(int j=0;j<bp-a;++j){
                    auto res=solve(nh,i+1,i+j+mid+2);
                    m=min(m,res.first);
                    mxr=max(mxr,res.second);
                }
            }
        }
        return dp[n][a][b]={m+1,mxr+1};
    }
};
