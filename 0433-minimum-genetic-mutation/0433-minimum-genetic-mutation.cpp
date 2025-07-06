class Solution {
public:
    int minMutation(string startGene, string endGene, vector<string>& bank) {
        int n=bank.size();
        bool found=false;
        for(int i=0;i<n;i++){
            if(bank[i]==endGene){
                found=true;
                break;
            }
        }
        if(found==false){
            return -1;
        }
        stack<pair<string,int>> st;
        vector<bool> used(n,false);
        st.push({startGene,0});
        while(st.empty()==false){
            string gene=st.top().first;
            int mutations=st.top().second;
            st.pop();
            if(gene==endGene){
                return mutations;
            }
            for(int i=0;i<n;i++){
                if(used[i]==false && check(gene,bank[i])){
                    used[i]=true;
                    st.push({bank[i],mutations+1});
                }
            }
        }
        return -1;
    }
    bool check(string a, string b){
        int diff=0;
        for(int i=0;i<8;i++){
            if(a[i]!=b[i]){
                diff++;
            }
        }
        if(diff==1){
            return true;
        }
        return false;
    }
};