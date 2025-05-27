class Solution {
public:
   vector<vector<int>> combine(int n, int k) {
       vector<vector<int>> r;
       vector<int> c;
       
       for(int m = 0; m < (1 << n); m++) {
           int b = 0;
           for(int i = 0; i < n; i++) {
               if(m & (1 << i)) {
                   b++;
               }
           }
           
           if(b == k) {
               c.clear();
               for(int i = 0; i < n; i++) {
                   if(m & (1 << i)) {
                       c.push_back(i + 1);
                   }
               }
               r.push_back(c);
           }
       }
       
       return r;
   }
};