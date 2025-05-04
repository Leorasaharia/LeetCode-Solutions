class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        long long c=0,x;
        for(int i=0;i<n;i++){
            if(c==0){
                x=nums[i];
            }
            if(nums[i]==x){
                c++;
            }
            else{
                c--;
            }
        }
        return x;
    }

};
