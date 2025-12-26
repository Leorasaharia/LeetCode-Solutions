class Solution{
public:
    vector<string> buildArray(vector<int>&target,int n){
        vector<string>arr;
        int curr=1;
        int t=target.size();
        for(int i=0;i<t;i++){
            while(curr<target[i]){
                arr.push_back("Push");
                arr.push_back("Pop");
                curr++;
            }
            arr.push_back("Push");
            curr++;
        }
        return arr;
    }
};
