class Solution {
public:
    int longestConsecutive(vector<int>& nums){
        unordered_set<int>nmst(nums.begin(), nums.end());
        int lgst=0;
        for(int n:nmst){
            if(nmst.find(n-1)==nmst.end()){
                int curr=n;
                int l=1;
                while(nmst.find(curr+1)!=nmst.end()){
                    curr+=1;
                    l+=1;
                }
                lgst=max(lgst,l);
            }
        }
        return lgst;
    }
};