class Solution {
public:
    bool isPalindrome(int x) {
        long long rem=0;
        int num;
        if(x<0){
            return false;
        }else{
            rem=0;
            num=x;
            while(x!=0){
                rem=rem*10 +x%10;
                x/=10;
            }
            return rem==num;
        }
    }
};