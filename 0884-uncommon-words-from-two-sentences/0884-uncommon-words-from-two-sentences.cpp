class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        int n1=s1.size(), n2=s2.size();
        unordered_map<string, int> freq;
        string w="";
        for(int i=0; i<n1;i++){
            if(s1[i]==' '){
                freq[w]++;
                w="";
            }else{
                w+=s1[i];
            }
        }
        freq[w]++;
        w="";
        for(int i=0;i<n2;i++){
            if(s2[i]==' '){
                freq[w]++;
                w="";
            }else{
                w+=s2[i];
            }
        }
        freq[w]++;
        vector<string> res;
        for(auto &[k,v]:freq){
            if(v==1){
                res.push_back(k);
            }
        }return res;
    }
};
