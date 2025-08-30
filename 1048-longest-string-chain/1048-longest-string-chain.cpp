class Solution {
public:
    bool isPredecessor(string a,string b) {
        if(b.size()-a.size()!=1){
            return false;
        }
        int i=0,j=0,d=0;
        while(i<a.size()&&j<b.size()){
            if(a[i]==b[j]){
                i++,j++;
            }
            else if(++d>1){
                return false;
            }
            else j++;
        }
        return true;
    }
    
    int longestStrChain(vector<string>&w){
        for(int i=0;i<w.size();i++){
            for(int j=i+1;j<w.size();j++){
                if(w[i].size()>w[j].size()){
                    swap(w[i],w[j]);
                }
            }
        }
        vector<int>c(w.size(),1);
        int m=1;
        for(int i=1;i<w.size();i++){
            for(int j=0;j<i;j++)
                if(isPredecessor(w[j],w[i]))
                    c[i]=max(c[i],c[j]+1);
            m=max(m,c[i]);
        }
        return m;
    }
};