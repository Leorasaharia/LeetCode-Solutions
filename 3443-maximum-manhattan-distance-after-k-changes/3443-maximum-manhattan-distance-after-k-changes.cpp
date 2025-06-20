class Solution {
public:
    int maxDistance(string s,int k){
        int a=0,b=0,c=0,d=0,m=0;
        for(char x:s){
            if(x=='N'){
                a++;
            }else if(x=='S'){
                b++;
            }else if(x=='E'){
                c++;
            }else{
                d++;
            }
            int t1;
            if(a<b){
                t1=a;
            }else{
                t1=b;
            }
            if(k<t1){
                t1=k;
            }
            int t2;
            if(c<d){
                t2=c;
            }else{
                t2=d;
            }
            if(k-t1<t2){
                t2=k-t1;
            }
            int p=cnt(a,b,t1)+cnt(c,d,t2);
            if(p>m){
                m=p;
            }
        }
        return m;
    }

    int cnt(int u,int v,int t){
        int r;
        if(u>v){
            r=u-v;
        }else{
            r=v-u;
        }
        return r+t*2;
    }
};
