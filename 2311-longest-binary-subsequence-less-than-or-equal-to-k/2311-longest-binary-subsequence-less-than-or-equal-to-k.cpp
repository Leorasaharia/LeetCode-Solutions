class Solution {
public:
    int longestSubsequence(string s,int k){
        int n=s.size();
        int cnt=0;
        long long val=0,p=1;
        int bits=0,t=k; //count number of bits required to represent k
        while(t){
            bits++;
            t>>=1;
        }
        for(int i=0;i<n;i++){
            if(s[i]=='0'){
                cnt++;
            }
        }
        for(int i=n-1,j=0;i>=0;i--,j++){
            if(s[i]=='1'){
                if(j<bits && val+(1LL<<j)<=k){
                    val+=1LL<<j;
                    cnt++;
                }
            }
        }
        return cnt;
    }
};
