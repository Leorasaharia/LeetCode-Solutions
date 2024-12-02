class Solution{
public:
    int canCompleteCircuit(vector<int>&g,vector<int>&c){
        int t=0,cc=0,s=0,cg=0;
        for(int i=0;i<g.size();++i){
            t+=g[i];
            cc+=c[i];
            cg+=g[i]-c[i];
            if(cg<0){
                s=i+1;
                cg=0;
            }
        }
        return t>=cc?s:-1;
    }
};
