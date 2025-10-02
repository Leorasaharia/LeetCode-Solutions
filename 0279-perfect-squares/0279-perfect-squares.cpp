class Solution {
public:
    bool isSquare(int x){
        int n=floor(sqrt(x)); 
        return n*n==x;
    }
    int numSquares(int n){
        if(isSquare(n)){
            return 1;
        }
        for(int i=1;i*i<=n;i++){
            int rem=n-i*i;
            if(isSquare(rem)){
                return 2;
            }
        }
        for(int i=1;i*i<=n;i++){
            for(int j=1;j*j<=n;j++){
                int rem=n-i*i -j*j;
                if(rem>=0 && isSquare(rem)){
                    return 3;
                }
            }
        }
        return 4;
    }
};