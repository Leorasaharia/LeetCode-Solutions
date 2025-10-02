class Solution {
public:
    int hIndex(vector<int>& c){
        int n=c.size();
        // reverse(c.begin(),c.end());
        int h=0;
        for(int i=0;i<n;i++){
            if(c[i]>=n-i){
                h=n-i;
                break;
            }
        }
        return h;
    }
};