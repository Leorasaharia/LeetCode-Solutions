class Solution {
public:
    int smallestNumber(int n) {
        for(int i=n;i<=102000;i++){
            int x=i,res=1;
            while(x>0) {
                if(x%2==0) {
                    res=0;
                    break;
                }
                x=x/2;
            }
            if(res==1){
                return i;
            }
        }
        return n;
    }
};
