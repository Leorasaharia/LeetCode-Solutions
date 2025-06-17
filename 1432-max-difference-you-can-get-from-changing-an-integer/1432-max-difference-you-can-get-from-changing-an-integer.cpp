class Solution {
public:
    int maxDiff(int n) {
        vector<int>d;
        int t=n;
        while(t>0){
            d.push_back(t%10);
            t/=10;
        }
        reverse(d.begin(),d.end());
        vector<int>mx=d,mn=d;
        for(int i=0;i<d.size();i++){
            if(d[i]!=9){
                int x=d[i];
                for(int j=0;j<mx.size();j++){
                    if(mx[j]==x){
                        mx[j]=9;
                    }
                }
                break;
            }
        }
        if(d[0]!=1){
            int x=d[0];
            for(int j=0;j<mn.size();j++){
                if(mn[j]==x)mn[j]=1;
            }
        }else{
            for(int i=1;i<d.size();i++){
                if(d[i]!=0&&d[i]!=1){
                    int x=d[i];
                    for(int j=0;j<mn.size();j++){
                        if(mn[j]==x){
                            mn[j]=0;
                        }
                    }
                    break;
                }
            }
        }
        int a=0,b=0;
        for(int x:mx){
            a=a*10+x;
        }
        for(int x:mn){
            b=b*10+x;
        }
        return a-b;
    }
};