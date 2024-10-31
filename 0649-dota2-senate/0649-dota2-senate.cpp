class Solution {
public:
    string predictPartyVictory(string senate) {
        int s=senate.size();
        queue<int> rad,dir;
        for(int i=0;i<s;i++){
            if(senate[i]=='R'){
                rad.push(i);
            }else{
                dir.push(i);
            }
        }if(rad.size()==0){
            return "Dire";
        }else if(dir.size()==0){
            return "Radiant";
        }while(!rad.empty()&& !dir.empty()){
            if(rad.front()<dir.front()){
                dir.pop();
                int r=rad.front();
                rad.push(r+s);
                rad.pop();
            }else{
                rad.pop();
                int dr=dir.front();
                dir.pop();
                dir.push(dr+s);
            }
        }
        return rad.size()==0?"Dire":"Radiant";
    }
};