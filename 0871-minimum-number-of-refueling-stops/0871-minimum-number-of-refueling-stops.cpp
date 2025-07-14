class Solution {
public:
    int minRefuelStops(int target, int start, vector<vector<int>>& stations) {
        int n=stations.size();
        int fuel=start; i=0;
        int s=0;
        vector<bool> used(n,false);
        while(fuel<start){
            int mxf=0;
            int idx=-1;
            for(int i=0;i<n;i++){
                if(!used[i]&&stations[i][0]<=fuel){
                    if(stations[i][1]>mxf){
                        mxf=stations[i][1];
                        idx=i;
                    }
                }
            }
            if(idx==-1){
                return -1;
            }
            fuel+=stations[idx][1];
            used[idx]=true;
            s++;
        }
        return s;
    }
};