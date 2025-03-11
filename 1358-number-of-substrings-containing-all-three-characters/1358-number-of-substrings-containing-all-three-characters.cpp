class Solution {
public:
    int numberOfSubstrings(string s) {
        int n=s.length();
        int rt=0,lt=0,res=0;
        int freq[3]={0};
        for(rt=0;rt<n;++rt){
            freq[s[rt]-'a']++;
            while(freq[0]>0&&freq[1]>0&&freq[2]>0){
                res+=n-rt;
                freq[s[lt]-'a']--;
                lt++;
            }
        }
        return res;
    }
};
