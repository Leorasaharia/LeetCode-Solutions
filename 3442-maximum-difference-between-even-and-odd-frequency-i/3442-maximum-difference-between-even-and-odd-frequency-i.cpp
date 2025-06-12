class Solution {
public:
    int maxDifference(string s) {
        int f[26]={0};
        for(char c:s){
            f[c-'a']++;
        }
        for(int i=0;i<25;i++){
            for(int j=0;j<25-i;j++){
                if(f[j]<f[j+1]){
                    int t=f[j];
                    f[j]=f[j+1];
                    f[j+1]=t;
                }
            }
        }
        int od=-1, ev=-1;
        for(int i=0;i<26;i++){
            if(f[i]==0){
                break;
            }
            if(od==-1 && f[i]%2==1){
                od=f[i];
            }
            if(ev==-1 && f[i]%2==0){
                ev=f[i];
            }
            if(od!=-1 && ev!=-1){
                break;
            }
        }
        return od-ev;
    }
};
