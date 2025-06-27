class Solution {
public:
    string longestSubsequenceRepeatedK(string s, int k) {
        int n=s.length();
        int cnt[26]={0};
        for(int i=0;i<n;i++){
            cnt[s[i]-'a']++;
        }
        //keep all the valid characters
        string prev="";
        for(int i =0; i<n;i++){
            if(cnt[s[i]-'a']>=k){
                prev+=s[i];
            }
        }
        int m=prev.length();
        string res= "";
        // bfs approach to find out all the possible subseq.
        string subs[8000];
        int beg=0,end=0;
        subs[end++]="";
        while(beg<end){
            string curr=subs[beg++];
            if(curr.length()>res.length() || (curr.length()==res.length() && curr>res)){
                res=curr;
            }
            //traverse and add characters z to a
            for(char c='z';c>='a';c--){
                if(cnt[c-'a']>=k){
                    string next=curr+c;
                    //checking if next can be repeated k times
                    int ans=0,idx=0;
                    while(idx<m && ans<k){
                        int j=0;
                        while(idx<m && j<next.length()){
                            if(prev[idx]==next[j]) j++;
                            idx++;
                        }
                        if(j==next.length())ans++;
                        else break;
                    }
                    if(ans>= k &&end<8000){
                        subs[end++]=next;
                    }
                }
            }
        }
        return res;
    }
};