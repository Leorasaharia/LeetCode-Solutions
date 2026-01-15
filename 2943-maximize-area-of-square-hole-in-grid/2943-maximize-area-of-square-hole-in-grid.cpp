class Solution{
public:
    void bubblesort(vector<int>&a){
        int n=a.size();
        for(int i=0;i<n;i++){
            for(int j=0;j<n-i-1;j++){
                if(a[j]>a[j+1]){
                    int t=a[j];
                    a[j]=a[j+1];
                    a[j+1]=t;
                }
            }
        }
    }
    int maximizeSquareHoleArea(int n,int m,vector<int>&h,vector<int>&v){
        bubblesort(h);
        bubblesort(v);
        int mh=2,mv=2,c=1;
        int k=h.size();
        for(int i=1;i<k;i++){
            if(h[i]==h[i-1]+1){
                c++;
            }
            else{
                c=1;
            }
            mh=max(mh,c+1);
        }
        c=1;
        int l=v.size();
        for(int i=1;i<l;i++){
            if(v[i]==v[i-1]+1){
                c++;
            }
            else{
                c=1;
            }
            mv=max(mv,c+1);
        }
        int s=min(mh,mv);
        return s*s;
    }
};
