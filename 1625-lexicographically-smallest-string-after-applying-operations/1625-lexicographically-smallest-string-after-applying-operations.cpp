class Solution {
public:
    string findLexSmallestString(string s, int a, int b) {
        int n=s.size();
        queue<string> q;
        unordered_set<string>vis;
        string ans=s;
        q.push(s);
        vis.insert(s);
        while(!q.empty()){
            string cur=q.front();
            q.pop();
            ans=min(ans,cur);
            string add=cur;
            for(int i=1;i<n;i+=2){
                add[i]=((add[i]-'0'+a)%10)+'0';
            }
            if(!vis.count(add)){
                vis.insert(add);
                q.push(add);
            }
            string rot=cur.substr(n-b)+cur.substr(0,n-b);
            if(!vis.count(rot)){
                vis.insert(rot);
                q.push(rot);
            }
        }
        return ans;
    }
};
