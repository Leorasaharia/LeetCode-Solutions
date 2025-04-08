class Solution {
public:
    int maxScore(vector<int>&cp,int k) {
        int n=cp.size();
        int sum=0;
        for(int i=0;i<k;i++){
            s+=cp[i];
        }
        int ans=sum;
        for(int i=1;i<=k;i++){
            sum-=cp[k-i];
            sum+=cp[n-i];
            if(sum>ans){
                ans=sum;
            }
        }
        return ans;
    }
};
