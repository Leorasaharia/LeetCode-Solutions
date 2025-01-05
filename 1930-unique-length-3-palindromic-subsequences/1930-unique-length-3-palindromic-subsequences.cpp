class Solution {
public:
    int countPalindromicSubsequence(string s) {
        int n=s.size();
        vector<int> a(26,-1),b(26,n);
        for(int i=0;i<n;i++){
            if(a[s[i]-'a']==-1){
                a[s[i]-'a']=i;
            }
            b[s[i]-'a']=i;
        }
        int ans=0;
        for(int i=0;i<26;i++){
            if(a[i]!=-1 && b[i]!=n){ 
                unordered_set<int> set;
                for(int j=a[i]+1;j<b[i];j++){
                    set.insert(s[j]);
                }
                ans+=set.size();
            }
        }
        return ans;
    }
};
