class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int beg=0;
        int end=arr.size()-1;
        while(beg<end){
            int mid=beg+(end-beg)/2;
            if(arr[mid]<arr[mid+1]){
                beg=mid+1;
            }else{
                end=mid;
            }
        } 
        return beg;
    }
};
