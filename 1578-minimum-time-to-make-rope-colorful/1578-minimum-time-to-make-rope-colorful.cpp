class Solution{
public:
    int minCost(string colors,vector<int>&neededTime){
        int n=colors.size();
        int m=neededTime.size();
        int cnt=0;
        if(n!=m){
            return 0;
        }
        for(int i=1;i<n;i++){
            if(colors[i]==colors[i-1]){
                cnt+=min(neededTime[i],neededTime[i-1]);
                neededTime[i]=max(neededTime[i],neededTime[i-1]);
            }
        }
        return cnt;
    }
};
