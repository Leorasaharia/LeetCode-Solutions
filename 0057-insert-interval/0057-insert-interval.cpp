class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& ivls, vector<int>& nwivl) {
        vector<vector<int>> arr;
        ivls.push_back(nwivl);
        int a=ivls.size();
        sort(ivls.begin(),ivls.end());
        arr.push_back(ivls[0]);
        int n=0;
        for(int i=1;i<a;i++){
            if(arr[n][1]>=ivls[i][0]) {
                arr[n][1]=max(arr[n][1],ivls[i][1]);
            } else {
                n++;
                arr.push_back(ivls[i]);
            }
        }
        return arr;
    }
};
