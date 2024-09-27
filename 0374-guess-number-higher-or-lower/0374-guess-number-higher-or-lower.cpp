class Solution {
public:
    int guessNumber(int n) {
        int beg=1;
        int end=n;
        while (beg<=end){
            int mid=beg+(end-beg)/2;
            int temp=guess(mid); 
            if(temp==0){
                return mid;
            }else if(temp==1){
                beg=mid+1;
            }else{
                end=mid-1;
            }
        }
        return -1;
    }
};
