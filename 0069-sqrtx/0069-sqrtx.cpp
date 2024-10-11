class Solution {
public:
    int mySqrt(int x){
        if(x==0||x==1){
            return x;
        }
        int beg=1,end=x/2 +1,res= 0;
        while (beg<=end){
            int mid=beg+(end-beg)/2;
            if(mid<=x/mid){
                res=mid;
                beg=mid+1;
            }else{
                end=mid-1;
            }
        }
        return res;
    }
};
