class Solution {
public:
    int minDominoRotations(vector<int>& tops, vector<int>& bottoms) {
        int n=tops.size();
        int ans=1e9;
        for(int x=1;x<=6;x++){ 
            int rot1=0;
            int rot2=0;
            bool res=true;
            for(int i=0;i<n;i++){
                if(tops[i]!=x && bottoms[i]!=x){
                    res=false; 
                    break;
                }
                if(tops[i]!=x){
                    rot1++;
                }
                if(bottoms[i]!=x){
                    rot2++;
                }
            }
            if(res){
                ans=min(ans,min(rot1,rot2));
            }
        }
        if(ans==1e9){
            return -1;
        }
        else{
            return ans; 
        } 
    }
};
