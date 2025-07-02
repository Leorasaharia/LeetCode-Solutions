class Solution {
public:
    vector<int> parent;
    int i;
    int find(int x){
        if(parent[x]==x){
            return x; //x is its own parent
        }
        parent[x]=find(parent[x]); //x is not its own parent
        return parent[x];
    }
    bool dsu(int par,int child){
        int c=find(child);
        if(c!=child){ //child has a psrent 
            return false;
        }
        int p=find(par); //to find the root of parent
        //now the cycle is detected
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
            parent[j]=j; //parent of own component
        }
        vector<int> indeg(n,0); //to validate the incoming edges towards vertex
        i=n; //not 
        for(int k=0;k<n;k++){
            for(int child:{left[k],right[k]}){ 
                if(child==-1){
                    continue;
                }
                indeg[child]++;
                if(indeg[child]>1){ //more than 1 parent, invalid bt
                    return false;
                }
                if(!dsu(k,child)){ //if found multiple roots, invalid bt
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
