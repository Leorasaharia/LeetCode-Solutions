class Solution {
public:
    vector<int> kthSmallestPrimeFraction(vector<int>& arr, int k) {
        int n=arr.size();
        double beg=0;
        double end=1,mid;
        int p=0,q=1;
        while(1){
            mid=(beg+end)/2;
            int cnt=0,j=1;
            p=0,q=1;
            for(int i=0;i<n-1;i++){
                while(j<n && (double)arr[i]/arr[j]>mid){
                    j++;
                }
                if(j==n){
                    break;
                }
                cnt+=n-j;
                if(p*arr[j]<q*arr[i]){
                    p=arr[i];
                    q=arr[j];
                }
            }
            if(cnt==k){
                return {p,q};
            }
            else if(cnt<k){
                beg=mid;
            }
            else{
                end=mid;
            }
        }
    }
};
