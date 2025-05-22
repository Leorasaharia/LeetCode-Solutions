class Solution {
public:
    int myAtoi(string s) {
        int n=s.size();
        int num=0;
        int neg=1;
        int i=0;
        while(i<n && s[i]==' '){
            i++;
        }
        if(i<n && s[i]=='-'){
            neg=-1;
            i++;
        }
        else if(i<n && s[i]=='+'){
            i++;
        }
        while(i<n && s[i]>='0' && s[i]<='9'){
            int m=s[i]-'0';
            if(num>INT_MAX/10 || (num==INT_MAX/10 && m>7)){
                if(neg==1){
                    return INT_MAX;
                }
                else{
                    return INT_MIN;
                }
            }
            num=num*10+m;
            i++;
        }
        return num*neg;
    }
};
