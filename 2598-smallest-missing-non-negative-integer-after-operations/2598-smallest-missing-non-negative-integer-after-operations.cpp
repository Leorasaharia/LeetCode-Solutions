class Solution {
public:
    int findSmallestInteger(vector<int>& nums, int value) {
        int n=nums.size();
        vector<int>count(value,0);
        //cnt remainders (both pos and neg)
        for(int i=0;i<n;i++){
            int rem=nums[i]%value;
            if(rem<0){
                rem+=value;
            }
            count[rem]++;
        }
        
        //traversing and finding the maxm mex
        int mex=0;
        while(true){
            int rem=mex%value;
            if(count[rem]>0){
                count[rem]--;
                mex++;
            }else{
                break;
            }
        }
        
        return mex;
    }
};