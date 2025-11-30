class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        int cnt=0;
        vector<int> arr1(n,0);
        vector<int> arr2(n,0);
        int a=0,b=0;
        for(int i=0;i<n;i++){
            if(nums[i]<0){
                arr1[a++]=nums[i];//neg integers
            }else{
                arr2[b++]=nums[i]; //pos integers
            }
        }
        vector<int> res;
        int i=0;
        while(i<a || i<b){
            if(i<b){
                res.push_back(arr2[i]);
            }
            if(i<a){
                res.push_back(arr1[i]);
            }
            i++;
        }
        return res;
    }
};
