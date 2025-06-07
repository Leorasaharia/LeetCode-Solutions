class Solution {
public:
    bool check(vector<int>& nums) {
        int n=nums.size();
        vector<int> arr(nums); //copy of nums
        sort(arr.begin(),arr.end());
        for(int i=0;i<n;i++){
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
