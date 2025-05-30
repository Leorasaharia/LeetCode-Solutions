class Solution {
public:
    string removeDigit(string number, char digit) {
        int idx=-1;
        int n=number.size();
        for(int i=0;i<n;i++){
            if(number[i]==digit){
                idx=i;
                if(i+1<number.size() && number[i+1]>digit){
                    break;
                }
            }
        }
        string ans="";
        for(int i=0;i<n;i++){
            if(i!=idx){
                ans+=number[i];
            }
        }
        return ans;
    }
};
