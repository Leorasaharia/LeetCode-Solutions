class Solution {
public:
    int maximumEnergy(vector<int>& energy, int k) {
        int n=energy.size();
        int ans=0; 
        bool ok=false;
        for(int i=0;i<n;i++){
            int s=0;
            for(int j=i;j<n;j+=k){
                s+=energy[j];
            }
            if(ok==0){ 
                ans=s; 
                ok=true;
            }
            else if(s>ans){
                ans=s;
            }
        }
        return ans;
    }
};
