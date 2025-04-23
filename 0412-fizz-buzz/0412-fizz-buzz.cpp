class Solution {
public:
    string ans[10000];
    vector<string> fizzBuzz(int n) {
        for(int i=1;i<=n;i++) {
            if(i%3==0&&i%5==0){
                ans[i-1]="FizzBuzz";
            }
            else if(i%3==0){
                ans[i-1]="Fizz";
            } 
            else if(i%5==0){
                ans[i-1]="Buzz";
            }
            else{
                int num=i;
                string str="";
                while(num>0){
                    str=char(num%10+'0')+str;
                    num/=10;
                }
                ans[i-1]=str;
            }
        }
        vector<string> ret(ans,ans+n);
        return ret;
    }
};
