class Solution{
    vector<int>b;
    int n,m,k;
    int getNumOfBouquets(vector<int>&bloomDay,int mid,int k){
        int nums=0;
        int cnt=0;
        for(int i=0;i<(int)bloomDay.size();i++){
            if(bloomDay[i]<=mid){
                cnt++;
            }else{
                cnt=0;
            }
            if(cnt==k){
                nums++;
                cnt=0;
            }
        }
        return nums;
    }

public:
    int minDays(vector<int>&bloomDay,int M,int K){
        b=bloomDay;
        n=(int)b.size();
        m=M;
        k=K;
        if((long long)m*k>n) return -1;

        int beg=1;
        int end=0;
        for(int day:b){
            end=max(end,day);
        }
        int ans=-1;
        while(beg<=end){
            int mid=beg+(end-beg)/2;
            if(getNumOfBouquets(b,mid,k)>=m){
                ans=mid;
                end=mid-1;
            }else{
                beg=mid+1;
            }
        }
        return ans;
    }
};
