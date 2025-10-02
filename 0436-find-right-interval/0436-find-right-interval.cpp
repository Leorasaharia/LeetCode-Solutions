class Solution { 
public:
    vector<int> findRightInterval(vector<vector<int>>& ivls) {
        int n=ivls.size();
        vector<int>ans(n,-1);
        vector<pair<int,int>>res;
        for(int i=0;i<n;i++){
            res.push_back({ivls[i][0],i});
        }
        sort(res.begin(),res.end());    
        for(int i=0;i<n;i++){
            int beg=0;
            int end=n-1;
            int idx=-1;
            while(beg<=end){
                int mid=beg+(end-beg)/2;
                if(res[mid].first>=ivls[i][1]){
                    idx=res[mid].second;  
                    end=mid-1;
                }else{
                    beg=mid+1;
                }
            }
            ans[i]=idx;
        }
        return ans;
    }
};
