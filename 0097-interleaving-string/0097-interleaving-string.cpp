class Solution {
public:
    bool isInterleave(string&s1,string&s2,string&s3){
        long long m=s1.size();
        long long n=s2.size();
        if(m+n!=s3.size()){
            return false;
        }
        vector<vector<int>> temp(m+1,vector<int>(n+1,-1));
        return helper(s1,s2,s3,0,0,temp);
    }
    bool helper(string&s1,string&s2,string&s3,int i,int j,vector<vector<int>>&temp){
        if(i==s1.size()&&j==s2.size()){
            return true;
        }
        if(temp[i][j]!=-1){
            return temp[i][j];
        }
        bool S1=false,S2=false;
        if(i<s1.size()&&s1[i]==s3[i+j]){ 
            S1=helper(s1,s2,s3,i+1,j,temp);
        }
        if(j<s2.size()&&s2[j]==s3[i+j]){
            S2=helper(s1,s2,s3,i,j+1,temp);
        }
        return temp[i][j]=S1||S2;
    }
};
