class Solution {
public:
    int findLHS(vector<int>& nums) {
        unordered_map<int,int> m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        int ans=0;
        vector<int>keys;
        for(auto& p:m){
            keys.push_back(p.first);
        }
        for(int i=0;i<keys.size();i++){
            int cur=keys[i];
            if(m.find(cur+1)!=m.end()){
                int len=m[cur]+m[cur+1];
                if(len>ans){
                    ans=len;
                }
            }
        }
        return ans;
    }
};
