class Solution {
public:
    int nthUglyNumber(int n) {
        vector<int> res(n);
        res[0]=1;
        int i=0,j=0,k=0;
        for(int x=1;x<n;x++){
            int a=res[i]*2;
            int b=res[j]*3;
            int c=res[k]*5;
            int m=min(a,min(b,c));
            res[x]=m;
            if(m==a){
                i++;
            }
            if(m==b){
                j++;
            }
            if(m==c){
                k++;
            }
        }
        return res[n-1];
    }
};
