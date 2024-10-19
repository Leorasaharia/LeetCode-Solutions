class Solution {
public:
    string intToRoman(int n){
        string r="";
        int v[]={1000,900,500,400,100,90,50,40,10,9,5,4,1};
        string s[]={"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
        for(int i=0;i<13;++i){
            while(n>=v[i]){
                r+=s[i];
                n-=v[i];
            }
        }
        return r;
    }
};
