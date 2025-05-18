class Solution {
public:
    int numberOfGoodPaths(vector<int>& vals, vector<vector<int>>& edges) {
        int find(int d,vector<int>&parent){
            if(d==parent[d])
            {
                return d;
            }
            else{
                return find(parent[d],parent);
            }
        }
        void(int x,int y, vector<int> parent){
            int xp=find(x,parent);
            int yp=find(y,parent);
            if(xp!=yp){
                parent[xp]=yp;
            }
        }
    }
}; 