class Solution {
public:
    bool canCross(vector<int>& stones) {
        int n=stones.size();
        vector<vector<int>> dp(n,vector<int>(n+1,0));
        dp[0][0]=1;
        for(int i=0;i<n;i++){
            for(int k=0;k<=n;k++){
                if(dp[i][k]!=0){
                    for(int j=-1;j<=1;j++){
                        int nk=k+j;
                        if(nk>0){
                            int pos=stones[i]+nk;
                            int idx=-1;
                            for(int t=i+1;t<n;t++){
                                if(stones[t]==pos){
                                    idx=t;
                                    break;
                                }
                                if(stones[t]>pos){
                                    break;
                                }
                            }
                            if(idx!=-1){
                                dp[idx][nk]=1;
                                if(idx==n-1){
                                    return true;
                                }
                            }
                        }
                    }
                }
            }
        }
        return false;
    }
};