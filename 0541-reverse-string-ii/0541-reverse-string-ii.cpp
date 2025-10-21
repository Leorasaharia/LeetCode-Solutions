class Solution {
public:
    string reverseStr(string s, int k) {
        int n=s.size();
        for(int i=0;i<n;i+=2*k){
            int beg=i;
            int end=min(i+k-1,n-1);
            while(beg<end){
                char temp=s[beg];
                s[beg]=s[end];
                s[end]=temp;
                beg++;
                end--;
            }
        }
        return s;
    }
};