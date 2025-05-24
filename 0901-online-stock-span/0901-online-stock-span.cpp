class StockSpanner {
public:
    vector<int> prices;
    StockSpanner(){}
    int next(int p){
        prices.push_back(p);
        int c=1;
        int n=prices.size()-2;
        for(int i=n;i>=0;i--){
            if(prices[i]<=p){
                c++;
            }
            else{
                break;
            }
        }
        return c;
    }
};
