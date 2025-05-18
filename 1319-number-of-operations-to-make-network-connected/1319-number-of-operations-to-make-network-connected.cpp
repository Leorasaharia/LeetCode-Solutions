class Solution {
public:
    int find(int d, vector<int>& parent) {
        if(parent[d]!=d){
            parent[d]=find(parent[d],parent);
        }
        return parent[d];
    }
    void merge(int x, int y, vector<int>& parent){
        int xp=find(x,parent);
        int yp=find(y,parent);
        if(xp!=yp){
            parent[xp]=yp;
        }
    }
    int makeConnected(int n, vector<vector<int>>& connections) {
        if(connections.size()<n-1){
            return -1;
        }
        vector<int> parent(n);
        for(int i=0;i<n;++i){
            parent[i]=i;
        }
        for(int i=0;i<connections.size();++i){
            merge(connections[i][0],connections[i][1],parent);
        }
        int components=0;
        for(int i=0;i<n;++i){
            if(parent[i]==i){
                components++;
            }
        }
        return components-1;
    }
};
