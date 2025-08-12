class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int beg=0;
        int end=arr.size()-k;
        while(beg<end){
            int mid=(beg+end)/2;
            if(x-arr[mid] > arr[mid+k]-x){
                beg=mid+1;
            }
            else{
                end=mid;
            }
        }
        vector<int> res;
        for(int i=beg;i<beg+k;i++){
            res.push_back(arr[i]);
        }
        return res;
    }
};
