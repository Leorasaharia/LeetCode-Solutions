// class Solution {
// public:
//     int maximumProduct(vector<int>& nums) {
//         int n=nums.size();
//         int maxx=INT_MIN;
//         for(int i=0;i<n;i++){
//             for(int j=i+1;j<n;j++){
//                 for(int k=j+1;k<n;k++){
//                     int prod=nums[i]*nums[j]*nums[k];
//                     if(prod>maxx){
//                         maxx=prod;
//                     }
//                 }
//             }
//         }
//         return maxx;
//     }
// };

class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int prod1 = nums[n-1] * nums[n-2] * nums[n-3];
        int prod2 = nums[0] * nums[1] * nums[n-1];
        return max(prod1, prod2);
    }
};
