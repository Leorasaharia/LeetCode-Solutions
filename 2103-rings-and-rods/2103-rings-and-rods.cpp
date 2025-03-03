class Solution {
public:
    int countPoints(string rings) {
        int n=rings.size();
        vector<unordered_set<char>> arr(10);
        for(int i=0;i<n;i+=2){
            string s=rings.substr(i,2);
            int idx=s[1]-'0';
            arr[idx].insert(s[0]);
        }int cnt=0;
        for(auto i:arr){
            if(i.size()==3){
                cnt++;
            }
        }
        return cnt;
        }

};