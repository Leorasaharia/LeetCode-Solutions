class Solution {
public:
    int numMatchingSubseq(string s,vector<string>&words){
        int n=words.size();
        unordered_map<string,int>mp;
        for(int i=0;i<n;i++){
            mp[words[i]]++;
        }
        int m=s.size();
        int cnt=0;
        for(auto it:mp){
            string w=it.first;
            int freq=it.second;
            int j=0,k=0;
            while(j<m  && k<w.size()){
                if(s[j]==w[k]){
                    k++;
                }
                j++;
            }
            if(k==w.size()){
                cnt+=freq;
            }
        }
        return cnt;
    }
};
