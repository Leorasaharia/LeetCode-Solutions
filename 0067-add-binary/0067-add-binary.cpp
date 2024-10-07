class Solution {
public:
    string addBinary(string a, string b) {
        string res="";
        int c=0;
        int i=a.size()-1;
        int j=b.size()-1;
        while(i>=0||j>=0||c){
            int sum=c;
            if(i>=0){
                sum+=a[i--]-'0';
                }
            if(j>=0){
                sum+=b[j--]-'0';
            }
            res=char(sum%2+'0')+res;
            c=sum/2;
        }
        return res;
    }
};
