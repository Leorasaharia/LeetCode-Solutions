class Solution {
public:
    bool isPowerOfTwo(int n) {
    while(n>1 && n%2==0){
            n/=2;
        }
        return n==1;
    }
};

