class Solution {
public:
    bool check(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n;i++){
            vector<int>arr(nums);
            bool dup=true;
            for(int j=0;j<n;j++){
                if(nums[(i+j)%n]!=arr[j]){
                    dup=false;
                    break;
                }
            }
            if(dup!=0){
                return true;
            }
        }
        return false;
    }
};
