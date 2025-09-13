class Solution {
public:
    int maxFreqSum(string s) {
        int f[26]={0};
        for(int i=0;i<s.size();i++){
            f[s[i]-'a']++;
        }
        string v="aeiou";
        int a=0;
        int b=0;
        for(int i=0;i<v.size();i++){
            a=max(a,f[v[i]-'a']);
        }
        for(int i=0;i<26;i++){
            if(v.find('a'+i)==string::npos){
                b=max(b,f[i]);
            }
        }
        return a+b;
    }
};
