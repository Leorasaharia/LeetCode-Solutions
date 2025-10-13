class Solution {
public:
    vector<long long> maximumEvenSplit(long long fsum){
        vector<long long>res;
        if(fsum%2!=0){
            return res;
        }
        long long sum=0;
        for(long long i=2;i<=fsum;i+=2){
            if(sum+i<=fsum) {
                res.push_back(i);
                sum+=i;
            }else{
                break;
            }
        }
        if(sum<fsum){
            long long diff=fsum-sum;
            int n=res.size()-1;
            for(int j=n;j>=0;j--){
                if(res[j]+diff>res[j]){
                    res[j]+=diff;
                    break;
                }
            }
        }
        return res;
    }
};