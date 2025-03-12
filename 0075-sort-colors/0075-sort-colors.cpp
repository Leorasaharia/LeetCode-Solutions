// class Solution {
// public:
//     void sortColors(vector<int>& nums) {
//         int l=0,m=0,h=nums.size()-1;
//         while(m<=h){
//             if(nums[m]==0){
//                 swap(nums[l++],nums[m++]);
//             }
//             else if(nums[m]==1){
//                 m++;
//             }
//             else{
//                 swap(nums[m],nums[h--]);
//             }
//         }
//     }
// };

class Solution {
public:
    void sortColors(vector<int>&a) {
        int h=a.size()-1;
        int  l=0,m=0;
        while(m<=h){
            if(a[m]==0){
                int tmp=a[l];
                a[l]=a[m];
                a[m]=tmp;
                l++;
                m++;
            }
            else if(a[m]==1){
                m++;
            }
            else{
                int tmp=a[m];
                a[m]=a[h];
                a[h]=tmp;
                h--;
            }
        }
    }
};
