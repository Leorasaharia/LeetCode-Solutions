class Solution {
public:
    long long coloredCells(int n) {
        long long totl=1;
        if(n==1){
            return totl;
        }
        for(int i=1;i<n;i++){
            totl+=4*i;
        }
        return totl;
    }
};
