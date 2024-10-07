class Solution {
public:
    int isPalindrome(int x){
        if(x<0||(x%10==0 && x!=0)) return 0;
        int rev=0,a=x;
        while(a>rev){
            rev=rev*10;
            rev+=a%10;
            a/=10;
        }
        return a==rev||a==rev/10;
    }
};
