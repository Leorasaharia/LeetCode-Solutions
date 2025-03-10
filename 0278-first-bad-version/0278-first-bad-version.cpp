// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int beg=1,end=n;
        long long res=-1;
        while(beg<=end){
            int mid=beg+(end-beg)/2;
            if(isBadVersion(mid)){
                res=mid;
                end=mid-1;
            }else{
                beg=mid+1;
            }
        }
        return res;
    }
};
