class NumArray {
    vector<int> arr;
public:
    NumArray(vector<int>& nums){
        arr=nums;
    }
    int sumRange(int left,int right){
        int sum=0;
        for(int i=left;i<=right;i++){
            sum+=arr[i];
        }
        return sum;
    }
};







