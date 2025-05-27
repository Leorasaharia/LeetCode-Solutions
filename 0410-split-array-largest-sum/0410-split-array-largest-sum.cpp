class Solution {
public:
    bool chk(vector<int>&a,int k,int m){
        int s=0,c=1;
        for(int x:a){
            if(x>m)return 0;
            if(s+x>m){
                c++;
                s=0;
            }
            s+=x;
        }
        return c<=k;
    }
    
    int splitArray(vector<int>&a,int k){
        int l=0,r=0;
        for(int x:a){
            l=max(l,x);
            r+=x;
        }
        while(l<r){
            int m=l+(r-l)/2;
            if(chk(a,k,m))r=m;
            else l=m+1;
        }
        return l;
    }
};
