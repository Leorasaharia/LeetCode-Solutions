class Solution { 
public: 
    int maxProduct(vector<int>& n) { 
        int mx=n[0], nmax=n[0], nmin=n[0]; 
        for(int i=1;i<n.size();i++){ 
            if(n[i]<0){
                swap(nmax,nmin);
            }
            nmax=max(n[i],nmax*n[i]); 
            nmin=min(n[i],nmin*n[i]); 
            mx=max(mx,nmax); 
        } 
        return m; 
    } 
};
