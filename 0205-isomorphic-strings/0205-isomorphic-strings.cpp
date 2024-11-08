#include<vector>
#include<string>
using namespace std;
class Solution{
    public:bool isIsomorphic(string s,string t){
        vector<long long>last_seen_s(256,-1),last_seen_t(256,-1);
        for(long long i=0;i<s.length();i++){
            long long sc=s[i],tc=t[i];
            if(last_seen_s[sc]!=last_seen_t[tc])
            return false;
            last_seen_s[sc]=i;
            last_seen_t[tc]=i;
            }
            return true;
            }
        };
