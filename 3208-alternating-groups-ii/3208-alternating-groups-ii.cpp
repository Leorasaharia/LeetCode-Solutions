class Solution {
public:
    int numberOfAlternatingGroups(vector<int>& c, int k) {
        int n=c.size();
        int cnt=0,tmp=1;
        for(int i=1; i<k; i++){
            if(c[i]==c[i-1]){
                tmp=0;
            }
        }
        cnt+=tmp;
        for(int i=1; i<n; i++){
            if(c[(i+k-2)%n]==c[(i+k-1)%n]){
                tmp=0;
            }
            if(c[i-1]==c[i]){
                tmp=1;
            }
            cnt+=tmp;
        }
        return cnt;
    }
};
