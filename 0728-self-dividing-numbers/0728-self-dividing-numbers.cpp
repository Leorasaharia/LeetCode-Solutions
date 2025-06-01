class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ans;
        for(int i=left;i<=right;i++){
            int n=i;
            bool res=true;
            while(n>0){
                int d=n%10;
                if(d==0||i%d!=0){
                    res=false;
                    break;
                }
                n/=10;
            }
            if(res!=0){
                ans.push_back(i);
            }
        }
        return res;
    }
};
