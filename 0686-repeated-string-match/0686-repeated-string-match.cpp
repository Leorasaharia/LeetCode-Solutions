class Solution {
public:
    int repeatedStringMatch(string a, string b) {
        int x=a.length();
        int y=b.length();
        vector<int> x1,y1; 
        int num=0;
        int len=max(x1.size(),y1.size());
        for(int i=0;i<len;i++){
            int c,d;
            if (i < x1.size()) c = x1[i];
            else c = 0;
            if (i < y1.size()) d = y1[i];
            else d = 0;
            if (c < d) return -1;  
            if (c > d) return 1; 
        }
        return 0;
    }
};