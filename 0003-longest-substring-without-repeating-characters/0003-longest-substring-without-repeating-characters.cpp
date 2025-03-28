class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.length();
        int m=0;
        if(n==0){
            return 0;
        }
        bool c[128]={false};
        for(int i=0;i<n;i++){
            if(i>0){
                for(int k=0;k<128;k++){
                    c[k]=false;
                }
            }
            int j=i;
            while(j<n&&!c[s[j]]){
                c[s[j]]=true;
                m=max(m,j-i+1);
                j++;
            }
        }
        return m;
    }
};