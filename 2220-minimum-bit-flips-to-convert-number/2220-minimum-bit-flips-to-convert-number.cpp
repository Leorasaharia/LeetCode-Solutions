class Solution {
public:
    int minBitFlips(int start, int goal) {
        int cnt=0;
        unsigned int mask=1;
        for(int i=0;i<32;i++){
            int st=(start/mask)%2;
            int end=(goal/mask)%2;
            if(st!=end){
                cnt++;
            mask=2*mask;
        }
        return cnt;
    }
};
