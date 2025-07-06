class Solution {
public:
    int dp[105][105][105];

    int solve(vector<int>&boxes,int lt,int rt,int cnt){
        if(lt>rt){
            return 0;
        }
        if(lt==rt){
            return (cnt+1)*(cnt+1);
        }
        if(dp[lt][rt][cnt]!=-1){
            return dp[lt][rt][cnt];
        }
        int res=(cnt+1)*(cnt+1)+solve(boxes,lt+1,rt,0);
        for(int i=lt+1;i<=rt;i++){
            if(boxes[lt]==boxes[i]){
                res=max(res,solve(boxes,i,rt,cnt+1)+solve(boxes,lt+1,i-1,0));
            }
        }
        return dp[lt][rt][cnt]=res;
    }
    int removeBoxes(vector<int>&boxes){
        for(int i=0;i<105;i++){
           for(int j=0;j<105;j++){
               for(int k=0;k<105;k++){
                  dp[i][j][k]=-1;
               }
           }
        }
        return solve(boxes,0,(int)boxes.size()-1,0);
    }
};
