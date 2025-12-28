class Solution{
public:
    int findPairs(vector<int>&nums,int k){
        int n=nums.size();
        if(k<0){
            return 0;
        }
        sort(nums.begin(),nums.end());
        //2 pointers
        int i=0;
        int j=1;
        int cnt=0;
        while(i<n &&j<n){
            if(i==j){
                j++;
                continue;
            }
            int d=nums[j]-nums[i];
            if(d==k){
                cnt++;
                int a=nums[i],b=nums[j];
                while(i<n&&nums[i]==a){
                    i++;
                }
                while(j<n&&nums[j]==b){
                    j++;
                }
            }
            else if(d<k){
                j++;
            }
            else{
                i++;
            }
        }
        return cnt;
    }
};
