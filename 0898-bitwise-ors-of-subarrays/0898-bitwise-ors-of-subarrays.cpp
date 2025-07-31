class Solution {
public:
    int subarrayBitwiseORs(vector<int>&arr){
        unordered_set<int>res;
        vector<int>prev;
        int n=arr.size();
        for(int i=0;i<n;i++){
            vector<int>cur;
            cur.push_back(arr[i]);
            int p=prev.size();
            for(int j=0;j<p;j++){
                int val=arr[i]|prev[j];
                cur.push_back(val);
            }
            sort(cur.begin(),cur.end());
            cur.erase(unique(cur.begin(),cur.end()),cur.end());
            prev=cur;
            int c=cur.size();
            for(int j=0;j<c;j++){
                res.emplace(cur[j]);
            }
        }
        return res.size();
    }
};
