class Solution{
public:
    bool isMatch(string s, string p){
        vector<bool> dp(p.size()+1, false);
        dp[0]=true;
        for(int j=2;j<=p.size();++j){
            if (p[j-1]== '*'){
                dp[j]=dp[j-2];
            }
        }
        for(int i=1;i<=s.size();i++){
            bool nn=dp[0];
            dp[0]=false;
            for( int j=1;j<=p.size();j++){
                bool curr=dp[j];
                if(p[j-1]!='*'){
                    dp[j]=(p[j-1]=='.' || p[j-1]==s[i-1]) &&nn;
                }else{
                    dp[j]=dp[j-2] ||(((p[j-2]=='.')||(p[j-2]==s[i-1]))&&curr);
                }
                nn=curr;
            }
        }
        return dp[p.size()];
    }
};