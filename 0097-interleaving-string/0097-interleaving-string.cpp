class Solution {
public:
    bool isInterleave(string&s1,string&s2,string&s3){
        if(s1.size()+s2.size()!=s3.size()){
            return false; 
        }
        return helper(s1,s2,s3,0,0,0);
    }
    bool helper(string&s1,string&s2,string&s3,int i,int j,int k){
        if(k==s3.size()){
            return i==s1.size()&&j==s2.size();
        }
        bool S1=false, S2=false;
        if(i<s1.size()&&s1[i]==s3[k]){
            S1=helper(s1,s2,s3,i+1,j,k+1);
        }
        if(j<s2.size()&&s2[j]==s3[k]){
            S2=helper(s1,s2,s3,i,j+1,k+1);
        }
        return S1||S2;
    }
};