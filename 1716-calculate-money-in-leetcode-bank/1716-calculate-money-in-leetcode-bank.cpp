class Solution {
public:
    int totalMoney(int n) {
        int cnt=1;
        int ans=0;
        for(int i=0;i<n;i++){
            int day=i%7;
            ans=ans+cnt+day;
            if(day==6){
                cnt++;
            }
        }
        return ans;
    }
};
