class Solution {
public:
    string getHint(string secret,string guess) {
        unordered_map<char,int> freqS;
        unordered_map<char,int> freqG;
        int b=0;
        int c=0;
        int i=0;
        while(secret[i]!='\0'){
            if(secret[i]==guess[i]) {
                b++;
            }else{
                freqS[secret[i]]++;
                freqG[guess[i]]++;
            }
            i++;
        }
        for(auto& entry:freqS){
            char ch=entry.first;
            if(freqG.find(ch)!=freqG.end()){
                if(freqS[ch]<freqG[ch]){
                    c+=freqS[ch];
                }
                else{
                    c+=freqG[ch];
                }
            }
        }
        string res="";
        res+=to_string(b);
        res+='A';
        res+=to_string(c);
        res+='B';
        return res;
    }
};
