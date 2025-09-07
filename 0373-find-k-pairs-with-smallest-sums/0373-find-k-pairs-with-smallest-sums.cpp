class Solution {
public:
    vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        vector<vector<int>>r;
        priority_queue<pair<int,pair<int,int>>>q;
        int n=nums1.size();
        for(int i=0;i<n;i++){
            if(i>=k){
                break;
            }
            int s=nums1[i]+nums2[0];
            q.push({-s,{i,0}});
        }
        for(int c=0;c<k;c++){
            if(q.empty()){
                break;
            }
            pair<int,pair<int,int>>t=q.top();
            q.pop();
            int s=t.first;
            int i=t.second.first;
            int j=t.second.second;
            r.push_back({nums1[i],nums2[j]});
            int n=j+1;
            if(n<nums2.size()){
                int ns=nums1[i]+nums2[n];
                q.push({-ns,{i,n}});
            }
        }
        return r;
    }
};