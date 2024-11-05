class Solution {
public:
    bool canConstruct(string r,string m){
        int cnt[26]={0};
        for(int i=0;i<m.size();i++){
            char c=m[i];
            if(c>='a'&&c<='z'){
                cnt[c-'a']=cnt[c-'a']+1;
            }else{
                cnt[c-'a']=cnt[c-'a'];
            }
        }
        for(int i=0;i<r.size();i++){
            char c=r[i];
            if(c>='a'&&c<='z'){
                if(cnt[c-'a']>0){
                    cnt[c-'a']=cnt[c-'a']-1;
                }else{
                    return false;
                }
            }else{
                cnt[c-'a']=cnt[c-'a'];
            }
        }
        return true;
    }
};
