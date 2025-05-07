class Solution {
public:
    vector<vector<int>> generateMatrix(int n){
        vector<vector<int>> m(n,vector<int>(n));
        int l=0,r=n-1,t=0,b=n-1,v=1;
        while(l<=r&&t<=b){
            for(int i=l;i<=r;i++)m[t][i]=v++;
            t++;
            for(int i=t;i<=b;i++)m[i][r]=v++;
            r--;
            for(int i=r;i>=l;i--)m[b][i]=v++;
            b--;
            for(int i=b;i>=t;i--)m[i][l]=v++;
            l++;
        }
        return m;
    }
};
