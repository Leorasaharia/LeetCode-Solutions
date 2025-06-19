class Solution {
public:
    int minimizeMax(vector<int>&a,int p){
        sort(a.begin(),a.end());
        int n=a.size();
        int beg=0;
        int end=a[n-1]-a[0];
        int ans=0;
        while(beg<=end){
            int mid=beg+(end-beg)/2;
            int c=0;
            for(int i=1;i<n;){
                if(a[i]-a[i-1]<=mid){
                    c++;
                    i+=2;
                }else{
                    i++;
                }
            }
            if(c>=p){
                ans=mid;
                end=mid-1;
            }else{
                beg=mid+1;
            }
        }
        return ans;
    }
};
