class Solution{
public:
    int getKth(int lo,int hi,int k){
        priority_queue<pair<int,int>>pq;
        for(int i=lo;i<=hi;i++){
            int cnt=0;
            int x=i;
            while(x!=1){
                if(x%2==0){
                    x=x/2;
                }
                else{
                    x=3*x+1;
                }
                cnt++;
            }
            pq.push({cnt,i});
        }
        int rem=pq.size()-k;
        while(rem--){
            pq.pop();
        }
        return pq.top().second;
    }
};
