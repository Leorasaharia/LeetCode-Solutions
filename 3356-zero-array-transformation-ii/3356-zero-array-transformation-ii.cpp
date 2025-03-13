class Solution {
public:
    int minZeroArray(vector<int>&nums,vector<vector<int>>&q) {
        int n=nums.size();
        int m=q.size();
        auto check=[&](int k){
            vector<int>dcrmt(n+1,0);
            for(int i=0;i<k;i++){
                int l=q[i][0];
                int r=q[i][1];
                int val=q[i][2];
                dcrmt[l]+=val;
                dcrmt[r+1]-=val;
            }
            int curr=0;
            for(int i=0;i<n;i++) {
                curr+=dcrmt[i];
                if(curr<nums[i]){
                    return false;
                }
            }
            return true;
        };
        if(all_of(nums.begin(),nums.end(),[](int x){return x==0;})){
            return 0;
        }
        int lt=1;
        int rt=m;
        if(!check(rt)){
            return -1;
        }
        while(lt<rt){
            int mid=lt+(rt-lt)/2;
            if(check(mid)){
                rt=mid;
            }
            else lt=mid+1;
        }
        return lt;
    }
};
