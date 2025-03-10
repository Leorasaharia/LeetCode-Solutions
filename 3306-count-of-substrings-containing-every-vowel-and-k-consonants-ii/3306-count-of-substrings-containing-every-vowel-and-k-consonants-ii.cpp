class Solution {
public:
    long long countOfSubstrings(string w, int k) {
        long long res=0;
        int n=w.size(),l=0,c=0;
        unordered_map<char,int> vc;
        unordered_set<char> v={'a','e','i','o','u'};
        for(int r=0;r<n;++r){
            char ch=w[r];
            if(v.count(ch)){
                vc[ch]++;
            }else{
                c++;
            }
            while(vc.size()==5&&c>k){
                char lt=w[l];
                if(v.count(lt)){
                    vc[lt]--;
                    if(vc[lt]==0){
                        vc.erase(lt);
                    }
                }else{
                    c--;
                }
                l++;
            }
            if(vc.size()==5&&c==k){
                res+=(l+1);
            }
        }
        return res;
    }
};
