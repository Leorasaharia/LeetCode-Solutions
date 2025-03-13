class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>>sub;
        vector<int>curr;
        sort(nums.begin(),nums.end());
        function<void(int)>dfs=[&](int i){
            if(i==n){
                sub.push_back(curr);
                return;
            }
            curr.push_back(nums[i]);
            dfs(i+1);
            curr.pop_back();
            while(i+1<n &&nums[i]==nums[i+1]){
                i++;
            }
            dfs(i+1);
        };
        dfs(0);
        return sub;
    }
};
