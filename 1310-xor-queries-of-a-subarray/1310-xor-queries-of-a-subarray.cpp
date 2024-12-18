class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& q){
        int n=arr.size();
        int pref[n];
            pref[0]=arr[0];
            for(int i=1;i<n;++i)
                pref[i]=arr[i-1]^arr[i];
            vector<int> ans;
            for(int i=0;i<q.size();i++){
                int l=q[i][0];
                int r=q[i][1];
                if(l==0){
                    ans.push_back(pref[r]);
                }else{
                    ans.push_back(pref[r]^pref[l-1]);
                }

            }
            return ans;
        }
};
