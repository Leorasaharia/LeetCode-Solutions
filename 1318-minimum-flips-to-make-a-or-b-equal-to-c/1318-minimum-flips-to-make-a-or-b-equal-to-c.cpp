class Solution {
public:
    int minFlips(int a,int b,int c) {
        int ans=0;
        for(int i=0;i<32;i++){
            bool x=(a&(1<<i))!=0;
            bool y=(b&(1<<i))!=0;
            bool z=(c&(1<<i))!=0;
            if(z==false){
                if(x==true&&y==true){
                    ans+=2;
                }else{
                    if(x==true||y==true){
                        ans++;
                    }
                }
            }else{
                if(x==false&&y==false){
                    ans++;
                }
            }
        }
        return ans;
    }
};
