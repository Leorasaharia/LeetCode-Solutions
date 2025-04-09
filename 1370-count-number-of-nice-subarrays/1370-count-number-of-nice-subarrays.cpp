class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int m=nums.size();
        int o=0,cnt=0;
        int tot= 0;
        int j=0;
        for(int i=0;i<m;i++){
            if(nums[i]&1){
                o++;
                if(o>=k){
                    cnt=1;
                    while(!(nums[j++]&1)){
                        cnt++;
                    }
                    tot+=cnt;
                }
            }else if(o>=k){
                tot+=cnt;
            }
        }
        return tot;
    }
};