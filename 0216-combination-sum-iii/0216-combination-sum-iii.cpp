class Solution{
public:
    vector<vector<int>> combinationSum3(int k,int n){
        vector<vector<int>> res;
        vector<int> comb(k);
        for(int i=0;i<k;i++){
            comb[i]=i+1;
        }
        while(true){
            int sum=0;
            for(int i=0;i<k;i++){
                sum+=comb[i];
            }
            if(sum==n){
                res.push_back(comb);
            }
            int i;
            for(i=k-1;i>=0;i--){
                if(comb[i]<9-(k-1-i)){
                    comb[i]++;
                    for(int j=i+1;j<k;j++){
                        comb[j]=comb[j-1]+1;
                    }
                    break;
                }
            }
            if(i<0){
                break;
            }
        }
        return res;
    }
};
