class Solution {
public:
    int find(int x, int parent[]){
        if(parent[x]!=x){
            parent[x]=find(parent[x],parent);
        }
        return parent[x];
    }
    void dsu(int a, int b, int parent[]){
        int pa=find(a,parent);
        int pb=find(b,parent);
        if(pa==pb){
            return;
        }
        if(pa<pb){
            parent[pb]=pa;
        }
        else{
            parent[pa]=pb;
        }
    }
    string smallestEquivalentString(string s1, string s2, string baseStr){
        int parent[26];
        for(int i=0;i<26;++i){
            parent[i]=i;
        }
        for(int i=0;i<s1.size();++i){
            int a=s1[i]-'a';
            int b=s2[i]-'a';
            dsu(a,b,parent);
        }
        string ans="";
        for(int i=0;i<baseStr.size();++i){
            int c=baseStr[i]-'a';
            char small='a'+find(c,parent);
            ans+=small;
        }
        return ans;
    }
};
