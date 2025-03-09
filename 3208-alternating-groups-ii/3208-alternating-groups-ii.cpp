class Solution {
public:
    int numberOfAlternatingGroups(vector<int>& c, int k) {
        int n=c.size();
        for(int i=0;i<k;i++){
            c.push_back(c[i]);
        }
        int tmp=-1;
        int cnt=0;
        for(int i=1;i<n+k-1;i++){
            if(c[i]==c[i-1]){
                tmp=i-1;
                continue;
            }
            if(i-tmp>=k){
                cnt++;
            }
        }
        return cnt;
    }
};
