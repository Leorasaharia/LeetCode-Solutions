class Solution{
public:
    int canCompleteCircuit(vector<int>&gas,vector<int>&cost){
        int n=gas.size();
        int totg=0,totc=0,start=0,cg=0;
        for(int i=0;i<n;++i){
            totg+=gas[i];
            totc+=cost[i];
            cg+=gas[i]-cost[i];
            if(cg<0){
                start=i+1;
                cg=0;
            }
        }
        if(totg>=totc){
            return start;
        }else{
            return -1;
        }
    }
};