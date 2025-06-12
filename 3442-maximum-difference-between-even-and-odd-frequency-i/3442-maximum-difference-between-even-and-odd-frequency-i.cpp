class Solution {
public:
    int maxDifference(string s) {
        int f[26]={0};
        for(char x:s){
            f[x-'a']++;
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
        int o=0,e=101;
        for(int i=0;i<26;i++){
            if(f[i]==0){
                break;
            }
            if(f[i]%2==1 && f[i]>o){
                o=f[i];
            }
        }
        for(int i=0;i<26;i++){
            if(f[i]==0){
                break;
            }
            if(f[i]%2==0 && f[i]<e){
                e=f[i];
            }
        }
        return o-e;
    }
};
