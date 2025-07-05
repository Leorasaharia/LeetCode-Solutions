class Solution {
public:
    int totalFruit(vector<int>&fruits) {
        int n=frutis.size();
        unordered_map<int,int>m;
        int beg=0,end=0;
        int cnt=0;
        int len=0;
        while(end<n){
            int arr=fruits[end];
            m[arr]++;
            if(m[arr]==1){
                cnt++;
            }
            end++;
            while(cnt>2){
                int t=fruits[beg];
                m[t]--;
                if(m[t]==0){
                    cnt--;
                }
                beg++;
            }
            len=max(len,end-beg);
        }
        return len;
    }
};
