class Solution {
public:
    int countValidSelections(vector<int>& nums) {
        int n=nums.size();
        int ans=0;
        for(int k=0;k<n;k++){
            if(nums[k]!=0){
                continue;
            }
            for(int i=-1;i<=1;i+=2){
                vector<int>a=nums;
                int curr=k;
                int dir=i;
                while(curr>=0 && curr<n){
                    if(a[curr]==0){
                        curr+=dir;
                    }else{
                        a[curr]--;
                        dir=-dir;
                        curr+=dir;
                    }
                }
                bool zero=true;
                for(int j=0;j<n;j++){
                    if(a[j]!=0){
                        zero=false;
                        break;
                    }
                }
                if(zero){
                    ans++;
                }
            }
        }
        return ans;
    }
};
