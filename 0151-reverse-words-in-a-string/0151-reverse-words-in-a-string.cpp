class Solution{
public:
    string reverseWords(string s){
        stringstream ss(s);
        string w;
        vector<string> arr;
        while(ss>>w){
            arr.push_back(w);
        }
        reverse(arr.begin(),arr.end());
        string res;
        for(int i=0;i<arr.size();i++){
            if(i!=0){
                res+=" ";
            }
            res+=arr[i];
        }
        return res;
    }
};
