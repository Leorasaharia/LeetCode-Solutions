class Solution {
public:
    int hIndex(vector<int>& c){
        int n=c.size();
        int beg=0;
        int end=n-1;
        int ans=0;
        while(beg<=end){
            int mid=(end-beg)+beg/2;
            int num=n-mid;
            if(c[mid]>=num){
                ans=num;
                end=mid-1;
            }else{
                beg=mid+1;
            }
        }
        return ans;
    }
};