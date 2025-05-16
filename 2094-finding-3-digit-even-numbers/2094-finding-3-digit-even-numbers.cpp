class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
        vector<int> res;
        sort(digits.begin(),digits.end());
        bool arr[1000]={false};
        int n=digits.size();
        for(int i=0;i<n;i++){
            if(digits[i]==0){
                continue;
            }
            for(int j=0;j<n;j++){
                if(j==i){
                    continue;
                }
                for(int k=0;k<n;k++){
                    if(k==i || k==j){
                        continue;
                    }
                    if(digits[k]%2 !=0){
                        continue;
                    }
                    int num=digits[i]*100 + digits[j]*10 + digits[k];
                    if(!arr[num]){
                        arr[num]=true;
                        res.push_back(num);
                    }
                }
            }
        }
        sort(res.begin(),res.end());
        return res;
    }
};
