class Solution {
public:
    int compareVersion(string version1, string version2) {
        vector<int> v1,v2;
        int num=0;
        int n=version1.size();
        for(int i=0;i<=n;i++){
            if(i==n||version1[i]=='.'){
                v1.push_back(num);
                num=0;
            }else{
                num=num*10 + (version1[i]-'0');
            }
        }
        num=0;
        int m=version2.size();
        for(int i=0;i<=m;i++){
            if(i==m || version2[i]=='.'){
                v2.push_back(num);
                num=0;
            }else{
                num=num*10 + (version2[i]-'0');
            }
        }
        int len=max(v1.size(),v2.size());
        for(int i=0;i<len;i++){
            int a,b;
            if(i<v1.size()){
                a=v1[i];
            }
            else{
                a=0;
            }
            if(i<v2.size()){
                b=v2[i];
            }
            else{
                b=0;
            }
            if(a<b){
                return -1;
            }
            if(a>b){
                return 1;
            }
        }
        return 0;
    }
};
