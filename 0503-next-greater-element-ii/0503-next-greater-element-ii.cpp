class Solution {
public:
    vector<int> nextGreaterElements(vector<int>&nums){
        int n=nums.size();
        vector<int> arr(n,-1); //this is the resulting array with -1 for all elements
        for(int i=0;i<n;i++){
            for(int j=1;j<n;j++){ //then we traverse for each element, checking if we find the next graeter element
                int idx=(i+j)%n;
                if(nums[idx]>nums[i]){
                    arr[i]=nums[idx];
                    break;
                }
            }
        }
        return arr;
    }
};
