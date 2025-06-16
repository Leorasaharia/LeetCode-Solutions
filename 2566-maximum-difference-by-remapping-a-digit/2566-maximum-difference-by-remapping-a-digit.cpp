class Solution {
public:
    int minMaxDifference(int num){
        int d[10];
        int n=0;
        int x=num;
        while(x!=0){
            d[n++]=x%10;
            x/=10;
        }
        for(int i=0;i<n/2;i++){
            int t=d[i];
            d[i]=d[n-1-i];
            d[n-1-i]=t;
        }
        int a=d[0];
        int b=-1;
        for(int i=0;i<n;i++){
            if(d[i]!=9){
                b=d[i]; 
                break; 
            }
        }
        int maxv=0;
        int minv=0;
        for(int i=0;i<n;i++){
            if(d[i]==b){
                maxv=maxv*10+9;
            }
            else{
            maxv=maxv*10+d[i];
            }
            if(d[i]==a){
                minv=minv*10+0;
            }
            else{
                minv=minv*10+d[i];
            }
        }
        return maxv-minv;
    }
};
