class Solution{
public:
    int splitArray(vector<int>&a,int k){
        int l=0,r=0;
        for(int i=0;i<(int)a.size();i++){
            if(a[i]>l){
                l=a[i];
            }
            r+=a[i];
        }
        while(l<r){
            int m=l+(r-l)/2;
            int c=1,s=0;
            for(int i=0;i<(int)a.size();i++){
                if(s+a[i]>m){
                    c++;
                    s=a[i];
                }else{
                    s+=a[i];
                }
                if(c>k){
                    break;
                }
            }
            if(c>k){
                l=m+1;
            }
            else{
                r=m;
            }
        }
        return l;
    }
};
