class Solution {
public:
    int maxIncreasingSubarrays(vector<int>&nums){
        int n=nums.size();
        int beg=1;
        int end=n/2;
        int ans=0;
        while(beg<=end){
            int mid=beg+(end-beg)/2;
            if(ok(mid,nums)){
                ans=mid;
                beg=mid+1;
            }else{
                end=mid-1;
            }
        }
        return ans;
    }

    bool ok(int k,vector<int>&arr){
        int n=arr.size();
        if(2*k>n){
            return false;
        }
        vector<int>len(n,1);
        for(int i=n-2;i>=0;i--){
            if(arr[i]<arr[i+1]){
                len[i]=len[i+1]+1;
            }
            else{
                len[i]=1;
            }
        }
        for(int i=0;i+2*k<=n;i++){
            if(len[i]>=k&&len[i+k]>=k){
                return true;
            }
        }
        return false;
    }
};
