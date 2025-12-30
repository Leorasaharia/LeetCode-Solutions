class Solution {
public:
    int numMatchingSubseq(string s, vector<string>& words) {
        int n=s.size();
        int m=words.size();
        int cnt=0;
        for(int i=0;i<m;i++){
            int j=0;
            int k=0;
            while(j<n && k<words[i].size()){
                if(s[j]==words[i][k]){
                    k++;
                }
                j++;
            }
            if(k==words[i].size()){
                cnt++;
            }
        }
        return cnt;
    }
};
