class Solution {
public:
    int numOfUnplacedFruits(vector<int>&fruits,vector<int>&baskets) {
        int n=fruits.size();
        for(int i=0;i<n;i++){
            int m=baskets.size();
            for(int j=0;j<m;j++){
                if(fruits[i]<=baskets[j]){
                    for(int k=j;k<m-1;k++){
                        baskets[k]=baskets[k+1];
                    }
                    baskets.pop_back();
                    break;
                }
            }
        }
        return baskets.size();
    }
};
