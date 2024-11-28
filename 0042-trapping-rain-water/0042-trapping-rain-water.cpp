class Solution {
public:
    int trap(vector<int>&h){
        int l=0,r=h.size()-1;
        int lmax=0,rmax=0;
        int res=0;
        while(l<r){
            if(h[l]<h[r]){
                h[l]>=lmax?lmax=h[l]:res+=lmax-h[l];
                l++;
            }else{
                h[r]>=rmax?rmax=h[r]:res+=rmax-h[r];
                r--;
            }
        }
        return res;
    }
};
