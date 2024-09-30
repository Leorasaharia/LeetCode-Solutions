class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> n(nums.begin(), nums.end());
        int a=nums.size();
        int b=n.size();
        if(a==n){
            return false;
        }else{
            return true;
        }
    }
};