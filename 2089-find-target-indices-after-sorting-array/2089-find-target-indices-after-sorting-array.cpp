class Solution{
public:
    vector<int>targetIndices(vector<int>&nums,int target){
        int n=nums.size();
        vector<int>arr=nums; // just a dummy array to store the copy of elements to sort
        sort(arr.begin(),arr.end());
        vector<int>res;
        for(int i=0;i<n;i++){
            if(arr[i]==target){
                res.push_back(i); //append the element of nums in res
            }
        }
        return res;
    }
};
