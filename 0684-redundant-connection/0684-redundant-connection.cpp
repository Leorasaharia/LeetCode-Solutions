int findp(int p[], int x){
    if(p[x]==x){
        return x;
    }
    return p[x]=findp(p,p[x]);
}

bool dsu(int p[], int r[], int a, int b){
    a=findp(p,a);  
    b=findp(p,b); 
    if(a==b){
        return false;
    } 
    if(r[a]<r[b]){
        swap(a,b); 
    } 
    p[b]=a;  
    if(r[a]==r[b]){
        r[a]++;
    }
    return true;
}
vector<int> findRedundantConnection(vector<vector<int>>& e) {
    int n=e.size();  
    int p[n+1],r[n+1];  
    for(int i=1;i<=n;i++){ 
        p[i]=i;
        r[i]=0;
    }
    for(int i=0;i<n;i++){ 
        int a=e[i][0];
        int b=e[i][1];
        if(!dsu(p,r,a,b)){
            return {a,b};  
        }
    }
    return {};
}