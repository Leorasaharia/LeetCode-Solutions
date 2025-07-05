class Solution {
public:
    int findLucky(vector<int>&arr) {
        int n=arr.size();
        int val[501]={};
        int cnt=-1;
        for(int i=0;i<n;i++){
            val[arr[i]]++;
        }
        for(int i=0;i<n;i++){
            if(val[arr[i]]==arr[i]&&arr[i]>cnt){
                cnt=arr[i];
            }
        }
        return cnt;
    }
};
