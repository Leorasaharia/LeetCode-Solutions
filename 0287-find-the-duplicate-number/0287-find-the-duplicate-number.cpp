class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n;i++){
            int arr=nums[i];
            if(nums[abs(arr)]<0){
                return abs(arr);
            }else{
                nums[abs(arr)]*=-1;
            }
        }
        return -1;
    }
};
