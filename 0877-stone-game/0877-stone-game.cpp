class Solution{
public:
    bool stoneGame(vector<int>& piles){
        int n=piles.size();
        int even=0;
        int odd=0;
        for(int i=0;i<n;i++){
            if(i%2==0){
                even+=piles[i];
            }
            else{
                odd+=piles[i];
            }
        }
        return true;
    }
};
