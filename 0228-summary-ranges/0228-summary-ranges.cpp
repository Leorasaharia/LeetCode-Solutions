class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums){
        vector<string> res(nums.size());
        int n=nums.size();
        int idx=0;
        for(int i=0;i<n;++i){
            int s=nums[i];
            while(i+1 <n && nums[i+1]== nums[i]+1){
                ++i;
            }
            if(s==nums[i]){
                res[idx]=to_string(s);
            }else{
                res[idx]=to_string(s)+"->"+to_string(nums[i]);
            }
            idx++;
        }
        res.resize(idx);
        return res;
    }
};
