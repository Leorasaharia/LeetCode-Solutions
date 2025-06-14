class Solution {
public:
    int beautySum(string s) {
        int n=s.size();
        int sum=0;
        for(int i=0;i<n;i++){
            int freq[26]={0}; //for each substring it stores the character count
            for(int j=i;j<n;j++){
                int idx=s[j]-'a';
                freq[idx]++;
                int mx=0;
                for(int x=0;x<26;x++){
                    if(freq[x]>mx){
                        mx=freq[x];
                    }
                }
                int mn=501; //constraint till 500
                for(int x=0;x<26;x++){
                    if(freq[x]>0 && freq[x]<mn){
                        mn=freq[x];
                    }
                }
                sum+=(mx-mn);
            }
        }

        return sum;
    }
};
