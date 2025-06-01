class Solution {
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
        if(n==1){
            return nums[0];
        }
        int a=0,b=0,tmp;
        for(int i=0;i<n-1;i++){
            tmp=a;
            a=max(b+nums[i],a);
            b=tmp;
        }
        int res1=a;
        a=0; 
        b=0;
        for(int i=1;i<n;i++){
            tmp=a;
            a=max(b+nums[i],a);
            b=tmp;
        }
        int res2=a;
        return max(res1,res2);
    }
};
