class Solution{
public:
    int partitionArray(vector<int>&a,int k){
        int n=a.size();
        int mx=1e5+1;
        vector<int>cnt(mx,0);
        for(int i=0;i<n;i++){
            cnt[a[i]]++;
        }
        vector<int>b;
        for(int i=0;i<mx;i++){
            while(cnt[i]--){
                b.push_back(i);
            }
        }
        int c=1;
        int m=b[0];
        for(int i=1;i<n;i++){
            if(b[i]-m>k){
                c++;
                m=b[i];
            }
        }
        return c;
    }
};
