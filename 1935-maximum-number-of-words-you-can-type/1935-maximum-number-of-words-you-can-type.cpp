class Solution{
public:
    int canBeTypedWords(string text,string broken){
        int cnt=0;
        int n=text.size();
        int m=broken.size();
        int i=0;
        while(i<n){
            int j=i;
            while(j<n && text[j]!=' '){
                j++;
            }
            bool ok=true;
            for(int p=i;p<j && ok;++p){
                for(int q=0;q<m;++q){
                    if(text[p]==broken[q]){ 
                        ok=false;
                        break;
                    }
                }
            }
            if(ok!=0){
                cnt++;
            }
            i=j+1;
        }
        return cnt;
    }
};