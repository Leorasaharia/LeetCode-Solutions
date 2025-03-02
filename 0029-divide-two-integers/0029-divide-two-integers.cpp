// class Solution {
// public:
//     int divide(int a, int b) {
//         if(a==INT_MIN && b==-1){
//             return INT_MAX; 
//         }  
//         bool neg=(a<0) ^(b<0);
//         long x=abs((long)a);
//         long y=abs((long)b);
//         int res=0;
//         vector<long> dp,m;
//         long var=y;
//         int mul=1;
//         while(var<= x){
//             dp.push_back(var);
//             m.push_back(mul);
//             var<<=1;
//             mul<<=1;
//         }
//         for(int i=dp.size()-1;i>=0;--i){
//             if(x>=dp[i]){
//                 x-=dp[i];
//                 res+=m[i];
//             }
//         }
//         return neg?-res:res;
//     }
// };
class Solution {
public:
    int divide(int a, int b) {
        if (a == INT_MIN && b == -1) return INT_MAX;
        bool neg = (a < 0) ^ (b < 0);
        long x = abs((long)a), y = abs((long)b), res = 0;
        while (x >= y) {
            long temp = y, mul = 1;
            while (x >= (temp << 1)) {
                temp <<= 1;
                mul <<= 1;
            }
            x -= temp;
            res += mul;
        }
        return neg ? -res : res;
    }
};
