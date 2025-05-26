class Solution{
public:
    vector<int> intersection(vector<int>& a, vector<int>& b){
        unordered_map<int,int>m;
        for(int i=0;i<a.size();i++){
            if(m.find(a[i])==m.end()){
                m[a[i]]=1;
            }
        }
        int k=0;
        for(int i=0;i<b.size();i++){
            if(m.find(b[i])!=m.end() && m[b[i]]==1){
                a[k]=b[i];
                k++;
                m[b[i]]=0;
            }
        }
        a.resize(k);
        return a;
    }
};
