class Solution {
public:
    long long maxRunTime(int n, vector<int>& batteries) {
        int p=batteries.size();  
        long long beg=0, end=0,mid=0;
        long long cnt=0;
        for(int i=0;i<p;i++){ //finding max possible time
            end+=batteries[i];
        }
        end/=n;
        while(beg<=end){
            mid=beg+(end-beg)/2;
            long long res=0;
            for(int i=0;i<p;i++){
                res+=min((long long)batteries[i],mid);
            }
            if(res>=mid*n){
                cnt=mid;       
                beg=mid+1;  
            }else{
                end=mid-1;  
            }
        }
        return cnt;
    }
};
