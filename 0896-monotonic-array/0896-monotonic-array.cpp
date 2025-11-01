class Solution{
public:
    bool isMonotonic(vector<int>&nums){
        int n=nums.size();
        bool inc=true;
        bool dec=true;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(nums[i]>nums[j]){
                    inc=false;
                }
                if(nums[i]<nums[j]){
                    dec=false;
                }
            }
        }
        return inc||dec;
    }
};
