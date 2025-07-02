class Solution {
public:
    vector<int> parent;
    int i;
    int find(int x){
        if(parent[x]==x){
            return x;
        }
        parent[x]=find(parent[x]);
        return parent[x];
    }
    bool dsu(int par,int child){
        int c=find(child);
        if(c!=child){
            return false;
        }
        int p=find(par);
        if(p==c){
            return false;
        }
        parent[child]=par;
        i--;
        return true;
    }
    bool validateBinaryTreeNodes(int n,vector<int>& left,vector<int>& right){
        parent.resize(n);
        for(int j=0;j<n;j++){
            parent[j]=j;
        }
        vector<int> indeg(n,0);
        i=n;
        for(int k=0;k<n;k++){
            for(int child:{left[k],right[k]}){ 
                if(child==-1){
                    continue;
                }
                indeg[child]++;
                if(indeg[child]>1){
                    return false;
                }
                if(!dsu(k,child)){
                    return false;
                }
            }
        }
        int roots=0;
        for(int j=0;j<n;j++){
            if(indeg[j]==0){
                roots++;
            }
        }
        return roots==1 && i==1;
    }
};
