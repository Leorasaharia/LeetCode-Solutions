class Solution{
public:
    int hammingWeight(int n){
        int m=0;
        while(n>0){
            m++;
            n=n&(n-1);
        }
        return m;
    }
};