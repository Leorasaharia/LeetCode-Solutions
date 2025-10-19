class Solution{
public:
    string findLexSmallestString(string s,int a,int b){
        int n=s.size();
        queue<string>q;
        unordered_map<string,bool>vis; 
        string ans=s;
        q.push(s);
        vis[s]=true;
        while(!q.empty()){
            string cur=q.front();
            q.pop();
            if(cur<ans){
                ans=cur;
            }
            string add=cur;
            for(int i=1;i<n;i+=2){
                add[i]=((add[i]-'0'+a)%10)+'0';
            }
            if(!vis[add]){
                vis[add]=true;
                q.push(add);
            }
            string rot=cur;
            string temp=cur;
            for(int i=0;i<n;i++){
                int idx=(i+b)%n;
                rot[idx]=temp[i];
            }
            if(!vis[rot]){
                vis[rot]=true;
                q.push(rot);
            }
        }
        return ans;
    }
};
