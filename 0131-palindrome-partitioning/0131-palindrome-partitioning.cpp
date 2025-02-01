class Solution {
public:
    vector<vector<string>>res;
    bool isPalindrome(string&s,int l,int r){
        while(l<r){
            if(s[l]!=s[r]){
                return 0;
            }
            l++,r--;
        }
        return 1;
    }
    void f(string&s,int i,vector<string>p){
        if(i==s.size()){
            res.push_back(p);
            return;
        }
        int j=i;
        while(j<s.size()){
            if(isPalindrome(s,i,j)){
                vector<string>new_p;
                int k=0;
                while(k<p.size()){
                    new_p.push_back(p[k]);
                    k++;
                }
                new_p.push_back(s.substr(i,j-i+1));
                f(s,j+1,new_p);
            }
            j++;
        }
    }
    vector<vector<string>>partition(string s){
        vector<string>p;
        f(s,0,p);
        return res;
    }
};
