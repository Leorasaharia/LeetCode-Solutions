class Solution {
public:
    string addStrings(string num1, string num2) {
        int n1=num1.size()-1;
        int n2=num2.size()-1; 
        int c=0;
        string res="";
        while(n1>=0||n2>=0||c){
            int sum=c;
            if(n1>=0){
                sum+=num1[n1--]-'0';
            }
            if(n2>=0){
                sum+=num2[n2--]-'0';
            }
            res=char(sum%10+'0')+res;
            c=sum/10;
        }
        return res;
    }
};
