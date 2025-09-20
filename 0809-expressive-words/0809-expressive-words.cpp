class Solution{
public:
    int expressiveWords(string s, vector<string>& words){
        int ans=0;
        int n=s.size();
        for(string &t: words){
            int i=0;
            int j=0;
            int m=t.size();
            bool res=true;
            while(i<n && j<m){
                if(s[i]!=t[j]){ 
                    res=false; 
                    break; 
                }
                char c=s[i];
                int a=0;
                int b=0;
                while(i<n && s[i]==c){ 
                    a++; 
                    i++; 
                }
                while(j<m && t[j]==c){ 
                    b++; 
                    j++; 
                }
                if(a<b || (a!=b && a<3)){ 
                    res=false; 
                    break;
                }
            }
            if(i!=n || j!=m){
                res=false;
            }
            if(res!=0){
                ans++;
            }
        }
        return ans;
    }
};
