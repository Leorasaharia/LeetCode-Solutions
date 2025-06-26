class Solution {
public:
    int wiggleMaxLength(vector<int>& nums) {
        int n=nums.size();
        if(n==0){
            return 0;
        }
        if(n==1){
            return 1;
        }
        int cnt=1;
        int prev=0;
        for(int i=1;i<n;i++){
            int diff=nums[i]-nums[i-1];
            if(diff>0 && prev<=0){
                cnt++;
                prev=1;
            }
            else if(diff<0 && prev>=0){
                cnt++;
                prev=-1;
            }
        }
        return cnt;
    }
};
