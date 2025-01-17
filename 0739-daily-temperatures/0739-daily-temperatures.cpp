class Solution {
public:
    vector<int> dailyTemperatures(vector<int>&a) {
        vector<int>b(a.size());
        stack<int>s;
        for(int i=a.size()-1;i>=0;i--){
            while(!s.empty() &&a[s.top()]<=a[i]){
                s.pop();
            }
            if(s.empty()){
                b[i]=0;
            }
            else{
                b[i]=s.top()-i;
            }
            s.push(i);
        }
        return b;
    }
};