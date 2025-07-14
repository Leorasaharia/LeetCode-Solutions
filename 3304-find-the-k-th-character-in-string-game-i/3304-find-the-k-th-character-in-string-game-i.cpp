class Solution {
public:
    char kthCharacter(int k) {
        int res=0, n;
        while(k!=1){
            int w=0;
            for(int i=1;i<k;i*=2){
                w++;
            }
            w--;
            int next=1;
            for(int i=0;i<w;i++){
                next*=2;
            }
            k=k-next;
            res++;
        }
        return 'a' + res;
    }
};