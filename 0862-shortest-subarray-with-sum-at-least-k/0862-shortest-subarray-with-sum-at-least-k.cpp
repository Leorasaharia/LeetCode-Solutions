class Solution {
public:
    int shortestSubarray(vector<int>nums,int K) {
        int n=nums.size();
        int res=n+1;
        deque<int>dq;
        vector<long long>ps(n,0);
        for(int i=0;i<n;++i){
            ps[i]=nums[i];
            if(i>0){
                ps[i]+=ps[i-1];
            }
            if(ps[i]>=K){
                res=min(res,i+1);
            }
            while(!dq.empty()&&ps[i]-ps[dq.front()]>=K){
                res=min(res,i-dq.front());
                dq.pop_front();
            }
            while(!dq.empty()&&ps[i]<=ps[dq.back()]){
                dq.pop_back();
            }
            dq.push_back(i);
        }
        return res<=n?res:-1;
    }
};