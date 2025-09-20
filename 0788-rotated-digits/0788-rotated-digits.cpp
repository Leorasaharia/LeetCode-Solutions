class Solution {
public:
    int rotatedDigits(int n){
        int cnt=0;
        for(int i=1;i<=n;i++){
            int x=i;
            bool res=true;
            bool diff=false;
            while(x>0){
                int d=x%10;
                x/=10;
                if(d==3||d==4||d==7){ 
                    res=false; 
                    break; 
                }
                if(d==2||d==5||d==6||d==9){
                    diff=true;
                }
            }
            if(res!=0 && diff!=0){
                cnt++;
            }
        }
        return cnt;
    }
};
