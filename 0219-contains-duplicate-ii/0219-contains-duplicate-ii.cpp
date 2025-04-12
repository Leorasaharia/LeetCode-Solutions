class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& a, int k) {
        int n=a.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<=i+k&&j<n;j++){
                if(a[i]==a[j]){
                    return true;
                }
            }
        }
        return false;
    }
};
