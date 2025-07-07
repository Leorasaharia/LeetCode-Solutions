class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        int n=timePoints.size();
        vector<int>mins;
        //convert time strings to mins
        for(int i=0;i<n;i++){
            string hr=timePoints[i].substr(0,2);
            string min=timePoints[i].substr(3,2);
            int hrs=0;
            int mns=0;
            //convert hours
            for(int j=0;j<hr.length();j++){
                if(hr[j]>='0' && hr[j]<='9'){
                    hrs=hrs*10+(hr[j]-'0');
                }
            }
            //convert mins
            for(int j=0;j<min.length();j++){
                if(min[j]>='0' && min[j]<='9'){
                    mns=mns*10+(min[j]-'0');
                }
            }
            int tot=hrs*60+mns;
            mins.push_back(tot);
        }
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if(mins[i]>mins[j]){
                    int tmp=mins[i];
                    mins[i]=mins[j];
                    mins[j]=tmp;
                }
            }
        }
        int mn=INT_MAX;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int diff=mins[j]-mins[i];
                int calc=1440-mins[j]+mins[i];
                if(diff<mn){
                    mn=diff;
                }
                if(calc<mn){
                    mn=calc;
                }
            }
        }
        return mn;
    }
};