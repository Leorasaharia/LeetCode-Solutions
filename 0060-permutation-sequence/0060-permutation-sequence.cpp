class Solution {
public:
    string getPermutation(int n, int k) {
        char s[10],res[10];  
        int fact[10]={1};
        int nums[10]={0},idx=0;  
        for(int i=1;i<n;i++){
            fact[i]=fact[i-1]*i;
        }
        for(int i=0;i<n;i++){
            s[i]='1'+i;
        }
        k--;  
        for(int i=n;i>0;i--){
            int pos=k/fact[i-1];  
            int j=0;
            int cnt=0;
            while(j<n){
                if(!nums[j]){
                    if(cnt==pos){
                        break;
                    }
                    cnt++;
                }
                j++;
            }
            res[idx++]=s[j];  
            nums[j]=1;  
            k%=fact[i-1];  
        }
        res[idx]='\0';  
        return string(res);
    }
};
