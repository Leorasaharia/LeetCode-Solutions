class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size();
        int bns = *max_element(piles.begin(), piles.end());
        
        int left = 1, right = bns;
        
        while (left < right) {
            int mid = left + (right - left) / 2;
            int hrs = 0;
            
            for (int j = 0; j < n; ++j) {
                hrs += (piles[j] + mid - 1) / mid;
            }
            
            if (hrs > h) {
                left = mid + 1;
            } else {
                right = mid;
            }
        }
        
        return left;
    }
};
