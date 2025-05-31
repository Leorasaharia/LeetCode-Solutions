class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        int n=nums.size();
        vector<int>res(n,0);      
        for(int i=0;i<n;i++){
            if(nums[i]<n){
                res[nums[i]]++;
            }
        }
        int deg=0;
        for(int x=0;x<n;x++){
            if(res[x]>deg){
                deg=res[x];
            }
        }
        int ans=n; 
        vector<int> start(n,-1),end(n,-1);
        for(int i=0;i<n;i++){
            int val=nums[i];
            if(val<n){
                if(start[val]==-1){
                    start[val]=i;
                }
                end[val]=i;
            }
        }
        for(int val=0;val<n;val++){
            if(res[val]==deg){
                int len=end[val]-start[val]+1;
                if(len<ans){
                    ans=len;
                }
            }
        }
        return ans;
    }
};
