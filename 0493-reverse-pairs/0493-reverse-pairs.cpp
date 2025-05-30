class Solution{
public:
    int reversePairs(vector<int>&nums){
        int n=nums.size();
        int cnt=0;
        vector<long long>res;
        for(int i=0;i<n;i++){
            long long t=2LL*nums[i];
            int beg=0;
            int end=res.size();
            while(beg<end){
                int mid=beg+(end-beg)/2;
                if(res[mid]<=t){
                    beg=mid+1;
                }
                else{
                    end=mid;
                }
            }
            cnt +=res.size()-beg;
            int l2=0;
            int r2=res.size();
            while(l2<r2){
                int mid2= l2+(r2-l2)/2;
                if(res[mid2]<nums[i]){
                    l2=mid2+1;
                }
                else{
                    r2=mid2;
                }
            }
            res.insert(res.begin()+l2,nums[i]);
        }
        return cnt;
    }
};
