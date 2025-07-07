class Solution {
public:
    int maxDistToClosest(vector<int>& seats) {
        int n=seats.size();
        int ans=0;
        for(int i=0;i<n;i++){
            if(seats[i]==0){
                int beg=i-1;
                int end=i+1;
                int d=n;
                while(beg>=0 && seats[beg]==0){
                    beg--;
                }
                while(end<n && seats[end]==0){
                    end++;
                }
                if(beg>=0){
                    d=min(d,i-beg);
                }
                if(end<n){
                    d=min(d,end-i);
                }
                ans=max(ans,d);
            }
        }
        return ans;
    }
};
