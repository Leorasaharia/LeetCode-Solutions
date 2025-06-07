class Solution{
public:
    string frequencySort(string s){
        int n=s.size();
        vector<int>freq(128,0);
        for(int i=0;i<n;i++){
            freq[s[i]]++;
        }
        string ans="";
        for(int f=n;f>=1;f--){
            for(int i=0;i<128;i++){
                if(freq[i]==f){
                    for(int j=0;j<f;j++){
                        ans+=(char)i;
                    }
                }
            }
        }
        return ans;
    }
};
