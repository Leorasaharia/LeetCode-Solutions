class Solution {
public:
    int maximumCandies(vector<int>&candies,long long k) {
        int l=1;
        long long r=*max_element(candies.begin(),candies.end());
        int res=0;
        while(l<=r){
            long long mid=l+(r-l)/2;
            int cnt=0;
            for(int i=0;i<candies.size();i++){
                cnt+=candies[i]/mid;
            }
            if(cnt>=k){
                res=mid;
                l=mid+1;
            }
            else{
                r=mid-1;
            }
        }
        return res;
    }
};
