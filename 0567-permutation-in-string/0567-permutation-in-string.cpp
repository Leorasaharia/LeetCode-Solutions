class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int x=s1.size();
        int y=s2.size();
        if(x>y){
            return false;
        }
        int a[26]={}, b[26]={};
        for(int i=0;i<x;i++){
            a[s1[i]-'a']++;
        }
        for(int i=0;i<y;i++){
            b[s2[i]-'a']++;
            if(i>=x){
                b[s2[i-x]-'a']--;
            }
            bool f=1;
            for(int j=0;j<26;j++){
                if(a[j]!=b[j]){
                    f=0;
                }
            }
            if(f){
                return true;
            }
        }
        return false;
    }
};
