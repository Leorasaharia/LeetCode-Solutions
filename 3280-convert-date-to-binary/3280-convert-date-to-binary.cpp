class Solution {
public:
    string toBinary(int num) {
        string bin="";
        while(num>0){
            bin=to_string(num%2)+bin;
            num/=2;
        }
        return bin.empty() ? "0" :bin;
    }
    string convertDateToBinary(string date) {
        int y,m,d;
        sscanf(date.c_str(), "%d-%d-%d",&y,&m,&d);
        return toBinary(y) + "-" + toBinary(m) + "-" + toBinary(d);
    }
};
