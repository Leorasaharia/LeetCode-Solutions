class Solution {
public:
int minMoves2(vector<int>& nums){
int n=nums.size();
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(nums[j]>nums[j+1]){
                int t=nums[j];
                nums[j]=nums[j+1];
                nums[j+1]=t;
                }
            }
        }
    int mid=nums[n/2];
    int moves=0;
    for(int i=0;i<n;i++){
        moves+=abs(nums[i]-mid);
        }
    return moves;
    }
};
