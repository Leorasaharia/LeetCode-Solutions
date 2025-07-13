class Solution {
public:
    int countSymmetricIntegers(int low,int high){
        int cnt=0;
        for(int i=low;i<=high;i++){
            string s=to_string(i);
            int n=s.size();
            if(n%2==0){
                int a=0;
                int b=0;
                for(int j=0;j<n/2;j++){
                    a+=s[j]-'0';
                }
                for(int j=n/2;j<n;j++){
                    b+=s[j]-'0';
                }
                if(a==b){
                    cnt++;
                }
            }
        }
        return cnt;
    }
};