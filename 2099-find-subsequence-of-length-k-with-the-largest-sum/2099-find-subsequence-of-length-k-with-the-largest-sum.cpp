class Solution{
public:
    vector<int>maxSubsequence(vector<int>&nums,int k){
        int n=nums.size();
        vector<pair<int,int>>v;
        
        for(int i=0;i<n;i++){
            v.push_back({nums[i],i});
        }
        sort(v.begin(),v.end());
        vector<int>idx;
        for(int i=n-k;i<n;i++){
            idx.push_back(v[i].second);
        }
        sort(idx.begin(),idx.end());
        vector<int>ans;
        for(int j=0;j<k;j++){
            ans.push_back(nums[idx[j]]);
        }
        return ans;
    }
};
