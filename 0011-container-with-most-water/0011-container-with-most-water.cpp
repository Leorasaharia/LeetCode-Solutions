class Solution {
public:
    int maxArea(vector<int>& height) {
        int l=0;
        int b=height.size()-1;
        int res=0;
        while(l<b){
            int w=b-l;
            int m=min(height[l], height[b]);
            int curr=w*m;
            res=max(res,curr);
            if (height[l]<height[b]){
                l+=1;
            }
            else{
                b-=1;
            }
        }
        return res;
    }
};
