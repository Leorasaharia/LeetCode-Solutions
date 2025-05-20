class Solution {
public:
    double findMedianSortedArrays(vector<int>&nums1,vector<int>&nums2){
        int n1=nums1.size();
        int n2=nums2.size();
        int n=n1+n2;
        vector<int>arr3(n);
        int i=0,j=0,k=0;
        while(i<n1 && j<n2){
            if(nums1[i]<nums2[j]){
                arr3[k++]=nums1[i++];
            }
            else{arr3[k++]=nums2[j++];
            }
        }
        while(i<n1){
            arr3[k++]=nums1[i++];
        }
        while(j<n2){
            arr3[k++]=nums2[j++];
        }
        if(n%2==0){
            return (arr3[n/2-1] + arr3[n/2]) / 2;
        }
        else{
            return arr3[n/2];
        }
    }
};
