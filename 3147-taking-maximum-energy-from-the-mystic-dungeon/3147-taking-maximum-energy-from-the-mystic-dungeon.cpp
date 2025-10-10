class Solution {
public:
    int maximumEnergy(vector<int>& energy, int k) {
        int n=energy.size();
        int ans=0; 
        bool res=false;
        for(int r=0;r<k;r++){
            int last=r+((n-1-r)/k)*k;
            int s=0;
            for(int i=last;i>=r;i-=k){
                s+=energy[i];
                if(!res){ 
                    ans=s; 
                    res=true; 
                }
                else if(s>ans){
                    ans=s;
                }
            }
        }
        return ans;
    }
};