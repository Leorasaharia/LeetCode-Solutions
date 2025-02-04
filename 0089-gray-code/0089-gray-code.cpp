class Solution {
public:
    vector<int> grayCode(int n) {
        vector<int> a(1<<n);
        for(int i=0;i<(1<<n);i++){
            a[i]=i^(i>>1);
        }
        return a;
    }
};
