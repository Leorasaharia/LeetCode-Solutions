class Solution {
public:
    int arrangeCoins(int n) {
        long beg=0,end=n,res=-1;
        while(beg<=end) {
            long mid=(beg+end)/2;
            if(mid*(mid+1)/2 <=n){
                beg=mid+1;
                res=mid;
            } else {
                end=mid-1;
            }
        }
        return res;
    }
};
