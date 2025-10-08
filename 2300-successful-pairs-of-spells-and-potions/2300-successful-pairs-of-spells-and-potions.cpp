class Solution{
public:
    vector<int>successfulPairs(vector<int>&spells,vector<int>&potions,long long success){
        vector<int>pairs;
        int n=spells.size(),m=potions.size();
        sort(potions.begin(),potions.end());
        for(int i=0;i<n;i++){
            long long s=spells[i],need=(success+s-1)/s;
            int l=0,r=m-1,pos=m;
            while(l<=r){
                int mid=l+(r-l)/2;
                if(potions[mid]>=need){
                    pos=mid;
                    r=mid-1;
                }else l=mid+1;
            }
            pairs.push_back(m-pos);
        }
        return pairs;
    }
};
