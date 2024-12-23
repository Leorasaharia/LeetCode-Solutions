class Solution {
public:
    int maxChunksToSorted(vector<int>& arr){
        int n=arr.size();
        int c=0,p=0,srt=0;
        vector<int>sorted_arr=arr;
        sort(sorted_arr.begin(),sorted_arr.end());
        for(int i=0;i<n;i++){
            p+=arr[i];
            srt+=sorted_arr[i];
            if(p==srt){
                c++;
            }
        }
        return c;
    }
};
