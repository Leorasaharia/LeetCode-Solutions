class Solution {
public:
    int maxProduct(vector<string>& words) {
        int n=words.size();
        vector<int> mask(n,0);
        for(int i=0;i<n;i++){
            for(char c:words[i]){
                int x=c-'a';
                mask[i]|=(1<<x);
            }
        }
        int ans=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if((mask[i]&mask[j])==0){
                    int p=words[i].size()*words[j].size();
                    if(p>ans){
                        ans=p;
                    }
                }
            }
        }
        return ans;
    }
};
