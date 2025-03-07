class Solution {
public:
    vector<int> closestPrimes(int l,int r) {
        vector<bool>p(1e6+1,1);
        vector<int>pr;
        p[0]=p[1]=0;
        for(int i=2;i*i<=1e6;i++){
            if(p[i]){
                for(int j=i*i;j<=1e6;j+=i){
                    p[j]=0;
                }
            }
        }
        for(int i=max(2,l);i<=r;i++){
            if(p[i]){
                pr.push_back(i);
            }
        }
        if(pr.size()<2){
            return{-1,-1};
        }
        int d=1e6,a=-1,b=-1;
        for(int i=1;i<pr.size();i++){
            if(pr[i]-pr[i-1]<d){
                d=pr[i]-pr[i-1],a=pr[i-1],b=pr[i];
            }
        }
        return {a,b};
    }
};
