class Solution {
public:
    int trap(vector<int>&h){
        int l=0;
        long long r=h.size()-1;
        int lm=0,rm=0,res=0;
        while(l<r){
            if(h[l]<h[r]){
                if(h[l]>=lm){
                    lm=h[l];
                }
                else{
                    res+=lm-h[l];
                } 
                l++;
            }else{
                if(h[r]>=rm){
                    rm=h[r];
                }
                else{
                    res+=rm-h[r];
                }
                r--;
            }
        }
        return res;
    }
};
