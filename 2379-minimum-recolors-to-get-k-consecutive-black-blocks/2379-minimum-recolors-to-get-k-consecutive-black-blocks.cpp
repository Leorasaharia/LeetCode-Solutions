class Solution{  
public:  
    int minimumRecolors(string b,int k){  
        int i=0,c=0,m=INT_MAX;  
        for(int j=0;j<b.size();j++){  
            c+=b[j]=='W';  
            if(j-i+1==k){  
                m=min(m,c);  
                c-=b[i++]=='W';  
            }  
        }  
        return m;  
    }  
};  
