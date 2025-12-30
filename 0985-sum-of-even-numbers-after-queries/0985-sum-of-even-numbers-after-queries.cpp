class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        int n=nums.size();
        int m=queries.size();
        vector<int> arr(m);
        for(int i=0;i<m;i++){
            int val=queries[i][0];
            int idx=queries[i][1];
            nums[idx]=nums[idx]+val;
            int sum=0;
            for(int j=0;j<n;j++){
                if(nums[j]%2==0){
                    sum=sum+nums[j];
                }
            }
            arr[i]=sum;
        }
        return arr;
    }
};
