class Solution {
public:
    int countGoodNumbers(long long n) {
        long long m=1e9+7;
        long long even=(n+1)/2;
        long long odd=n/2;
        long long r1=1,r2=1;
        long long ev=5,od=4;
        while(even){
            if(even%2){
                r1=r1*ev%m;
            }
            ev=ev*ev%m;
            even/=2;
        }
        while(odd){
            if(odd%2){
                r2=r2*od%m;
            }
            od=od*od%m;
            odd/=2;
        }
        return r1*r2%m;
    }
};
