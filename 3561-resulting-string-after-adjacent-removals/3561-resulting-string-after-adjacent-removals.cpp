class Solution{
public:
    string resultingString(string s){
        int n=(int)s.size();
        string res;
        for(int i=0;i<n;i++){
            char x=s[i];
             if(res.empty()==0){
                char y=res.back();
                if(abs(x-y)==1){
                    res.pop_back();
                    continue;
                }
                if((x=='a'&&y=='z')||(x=='z'&&y=='a')){
                    res.pop_back();
                    continue;
                }
            }
            res.push_back(x);
        }
        return res;
    }
}; 