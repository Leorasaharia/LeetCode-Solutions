class Solution {
public:
    int singleNumber(vector<int>& nums) {
        vector<int> freq_arr(32,0);
        for(int e:nums){
            for(int i=0;i<32;i++){
                if(e&(1<<i)){
                    freq_arr[i]++;
                }
            }
        }
        int result=0;
        for(int i=0;i<32;i++){
            if(freq_arr[i]%3==1){
                result+=(1<<i);
            }
        }
        return result;
    }
};
