class Solution {
public:
    string predictPartyVictory(string s) {
        queue<int> r, d;
        int n=s.size();
        for(int i=0;i<n;i++){
            if (s[i]=='R'){
                r.push(i);
            }
            else{
                d.push(i);
            }
        }
        while(!r.empty()&&!d.empty()){
            int x=r.front(),y=d.front();
            r.pop();
            d.pop();
            if(x<y){
                r.push(x + n);
            }
            else{
                d.push(y + n);
            }
        }
        return r.empty()?"Dire":"Radiant";
    }
};