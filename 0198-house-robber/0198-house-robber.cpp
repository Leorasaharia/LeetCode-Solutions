class Solution{
public:
    int rob(vector<int>& nums){
        int a=0,b=0;
        for(int i=0;i<nums.size();i++){
            int tmp=a;
            a=max(b+nums[i],a);
            b=tmp;
        }
        return a;
    }
};
