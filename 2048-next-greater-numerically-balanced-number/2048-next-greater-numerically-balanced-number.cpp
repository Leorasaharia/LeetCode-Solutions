class Solution {
public:
    bool checknum(int x){
        string s=to_string(x);
        vector<int>ch(10);
        int m=s.size();
        for(int i=0;i<m;i++){
            int d=s[i]-'0';
            ch[d]++;
        }
        for(int i=0;i<m;i++){
            int d=s[i]-'0';
            if(ch[d]!=d){
                return 0;
            }
        }
        return 1;
    }
    int nextBeautifulNumber(int n){
        int x=n+1;
        while(true){
            if(checknum(x)){
                return x;
            }
            x++;
        }
    }
};