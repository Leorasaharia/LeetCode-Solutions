class Solution{
public:
    int getSum(int a,int b){
        while(b>0){
            a=a+1;
            b=b-1;
        }
        while(b<0){
            a=a-1;
            b=b+1;
        }
        return a;
    }
};
