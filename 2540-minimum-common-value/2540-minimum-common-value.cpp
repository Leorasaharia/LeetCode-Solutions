class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        long long a= nums1.size(), b=nums2.size();
        int i=0;
        int j=0;
        while(i<a && j<b){
            if(nums1[i]==nums2[j]){
                return nums1[i];
            }else if(nums1[i]>nums2[j]){
                j++;
            }else{
                i++;
            }
        }
        return -1;
    }
};