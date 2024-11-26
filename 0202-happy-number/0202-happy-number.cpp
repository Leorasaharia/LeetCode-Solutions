class Solution {
public:
    int sqSum(int x){
        int s=0;
        while(x){
            int d=x%10;
            s+=d*d;
            x/=10;
        }
        return s;
    }

    bool isHappy(int n) {
        int s=n, f=n;
        do {
            s=sqSum(s);
            f=sqSum(sqSum(f));
        } while(s!=f);
        return s==1;
    }
};
