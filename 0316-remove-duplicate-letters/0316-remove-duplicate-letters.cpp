class Solution {
public:
    string removeDuplicateLetters(string s) {
        int freq[26]={0};
        bool temp[26]={0};
        for(char c:s){
            freq[c-'a']++;
        }
        string ans="";
        for(char c:s){
            freq[c-'a']--;
            if(temp[c-'a']){
                continue;
            }
            while(ans.empty()==0){
                char prev=ans.back();
                if(prev>c && freq[prev-'a']>0){
                    temp[prev-'a']=false;
                    ans.pop_back();
                } else break;
            }
            ans+=c;
            temp[c-'a']=true;
        }
        return ans;
    }
};
