class Solution {
public:
    int findLength(vector<int>& nums1,vector<int>& nums2){
        int n1=nums1.size();
        int n2=nums2.size();
        int ans=0;
        for(int i=0;i<n1;i++){
            for(int j=0;j<n2;j++){
                int cnt=0;
                int x=i;
                int y=j;
                while(x<n1 && y<n2 && nums1[x]==nums2[y]){
                    cnt++;
                    x++;
                    y++;
                }
                if(cnt>ans){
                    ans=cnt;
                }
            }
        }
        return ans;
    }
};
