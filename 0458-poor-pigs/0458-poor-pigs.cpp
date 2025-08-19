class Solution {
public:
    int poorPigs(int buckets, int minutesToDie, int minutesToTest) {
        int rounds=minutesToTest/minutesToDie;
        int pigs=0;
        long long cnt=1;
        while(cnt<buckets){
            pigs++;
            cnt*=(rounds+1);
        }
        return pigs;
    }
};
