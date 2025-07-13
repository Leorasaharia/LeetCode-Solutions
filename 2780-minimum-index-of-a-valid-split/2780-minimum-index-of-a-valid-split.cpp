class Solution {
public:
    int minimumIndex(vector<int>& nums) {
        int n=nums.size();
        vector<int> arr=nums;
        sort(arr.begin(),arr.end());
        int sub=arr[n/2]; 
        int left=0;
        int tot=0;
        for(int i=0;i<n;i++){
            if(nums[i]==sub){
                tot++;
            }
        }
        for(int i=0;i<n-1;i++){
            if(nums[i]==sub){
                left++;
            }
            int right=tot-left;
            if(left*2>i+1 && right*2>n-i-1){
                return i;
            }
        }
        return -1;
    }
};
