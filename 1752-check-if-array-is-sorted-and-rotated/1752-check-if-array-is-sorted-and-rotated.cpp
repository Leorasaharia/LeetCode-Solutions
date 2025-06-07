class Solution {
public:
    bool check(vector<int>& nums) {
        int n=nums.size();
        vector<int> arr(nums);
        for(int i=0;i<n;i++){
            for(int j=0;j<n-1;j++){
                if(arr[j]>arr[j+1]){
                    int temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                }
            }
        }
        for(int i=0;i<n;i++){
            bool dup=true;
            for(int j=0;j<n;j++){
                if(nums[(i+j)%n]!=arr[j]){
                    dup=false;
                }
            }
            if(dup!=0){
                return true;
            }
        }
        return false;
    }
};
