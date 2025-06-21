class Solution {
public:
    int minimumDeletions(string w, int k) {
        int f[26]={0};
        for(char c:w){
            f[c-'a']++;
        }
        vector<int>a;
        for(int i=0;i<26;i++){
            if(f[i]>0){
                a.push_back(f[i]);
            }
        }
        int n=a.size();
        int ans=w.size();
        for(int i=0;i<n;i++){
            int d=0;
            int x=a[i];
            for(int j=0;j<n;j++){
                if(a[j]>x+k){
                    d+=a[j]-x-k;
                }else if(a[j]<x){
                    d+=a[j];
                }
            }
            if(d<ans){
                ans=d;
            }
        }
        return ans;
    }
};
