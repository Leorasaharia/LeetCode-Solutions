class Solution{
public:
    vector<int>successfulPairs(vector<int>&spells,vector<int>&potions,long long success){
        vector<int>pairs;
        int n=spells.size();
        int m=potions.size();
        sort(potions.begin(),potions.end());
        for(int i=0;i<n;i++){
            long long s=spells[i];
            long long need=(success+s-1)/s;
            int beg=0;
            int end=m-1;
            int pos=m;
            while(beg<=end){
                int mid=beg+(end-beg)/2;
                if(potions[mid]>=need){
                    pos=mid;
                    end=mid-1;
                }else{
                    beg=mid+1;
                }
            }
            pairs.push_back(m-pos);
        }
        return pairs;
    }
};
