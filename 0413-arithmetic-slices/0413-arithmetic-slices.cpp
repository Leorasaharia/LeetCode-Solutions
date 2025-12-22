class Solution{
public:
    int numberOfArithmeticSlices(vector<int>& nums){
        int n=nums.size();
        int cnt=0;
        for(int i=0;i<n;i++){
            for(int j=i+2;j<n;j++){
                int diff=nums[i+1]-nums[i];
                bool ans=true;
                for(int k=i+2;k<=j;k++){
                    if(nums[k]-nums[k-1]!=diff){
                        ans=false;
                        break;
                    }
                }
                if(ans!=0){
                    cnt++;
                }
            }
        }
        return cnt;
    }
};
