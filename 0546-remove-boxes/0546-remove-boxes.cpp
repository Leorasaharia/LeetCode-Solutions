class Solution {
public:
    int removeBoxes(vector<int>&boxes){
        int n=boxes.size();
        int dp[100][100][100]={0};

        for(int len=1;len<=n;len++){
            for(int lt=0;lt<=n-len;lt++){
                int rt=lt+len-1;
                for(int cnt=0;cnt<=rt-lt;cnt++){
                    int&res=dp[lt][rt][cnt];
                    res=(cnt+1)*(cnt+1);
                    if(lt<rt)res+=dp[lt][rt-1][0];

                    for(int k=lt;k<rt;k++){
                        if(boxes[k]==boxes[rt]){
                            res=max(res,dp[lt][k][cnt+1]+dp[k+1][rt-1][0]);
                        }
                    }
                }
            }
        }

        return dp[0][n-1][0];
    }
};
