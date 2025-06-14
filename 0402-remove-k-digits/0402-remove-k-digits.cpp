class Solution {
public:
    string removeKdigits(string num, int k) {
        int n=num.size();
        char*res=new char[n];
        int ptr=0;
        for(int i=0;i<n;i++){
            while(ptr>0){
                if(res[ptr-1]>num[i]){
                    if(k>0){
                        ptr--;
                        k--;
                    }else{
                        break;
                    }
                }else{
                    break;
                }
            }
            res[ptr++]=num[i];
        }
        ptr=ptr-k;
        int j=0;
        while(j<ptr && res[j]=='0'){
            j++;
        }
        if(j==ptr){
            return "0";
        }
        string ans="";
        while(j<ptr){
            ans+=res[j++];
        }
        return ans;
    }
};
