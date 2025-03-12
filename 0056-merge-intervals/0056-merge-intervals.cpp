class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& ivl) {
        vector<vector<int>> arr;
        int a=ivl.size();
        if(a==0 || a==-1){
            return arr;
        }
        sort(ivl.begin(), ivl.end());
        arr.push_back(ivl[0]);
        long long n=0;
        for(int i=1;i<a;i++){
            if(arr[n][1]>=ivl[i][0]){
                arr[n][1]=max(arr[n][1], ivl[i][1]);
            }else{
                n++;
                arr.push_back(ivl[i]);
            }
        }
        return arr;
    }
};