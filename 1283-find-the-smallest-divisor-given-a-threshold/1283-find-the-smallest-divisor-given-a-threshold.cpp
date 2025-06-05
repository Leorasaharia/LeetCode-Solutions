class Solution{
public:
    int smallestDivisor(vector<int>&nums,int thresh){
        int n=nums.size();
        int beg=1;
        int end=*max_element(nums.begin(),nums.end());
        int res=-1;
        while(beg<=end){
            int mid=beg+(end-beg)/2; //binary search 
            int sum=0;
            for(int i=0;i<n;i++){
                sum+=(nums[i]+mid-1)/mid;
            }
            if(sum<=thresh){
                res=mid;
                end=mid-1;
            }
            else{
                beg=mid+1;
            }
        }
        return res;
    }
};
