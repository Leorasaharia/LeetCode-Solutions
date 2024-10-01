class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& n) {
        int m=0,curr=0;
        for(int x:n){
            if(x==1)curr++;
            else{
                m=max(m,curr);
                curr=0;
            }
        }
        return max(m,curr);
    }
};
