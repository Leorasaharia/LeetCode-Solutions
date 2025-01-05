class Solution {
public:
    int maxSubarrays(vector<int>&a) {
        int x=a[0];
        for(int y:a){
            x&=y;
        }
        if(x!=0){
            return 1;
        }
        int c=0,z=-1;
        for(int y:a){
            if(z==-1){
                z=y;
            }else{
                z&=y;
            }
            if(z==0){
                c++;
                z=-1;
            }
        }
    }
    return c;
}
};
