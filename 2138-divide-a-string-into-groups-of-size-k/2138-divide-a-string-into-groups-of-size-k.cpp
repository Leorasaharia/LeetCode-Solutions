class Solution {
public:
    vector<string> divideString(string s, int k, char fill){
        stack<char>st;
        int n=s.size()-1;
        for(int i=n;i>=0;i--){
            st.push(s[i]);
        }

        vector<string>ans;
        while(st.empty()==0){
            string val="";
            for(int i=0;i<k;i++){
                if(st.empty()==0){
                    val+=st.top();
                    st.pop();
                }else{
                    val+=fill;
                }
            }
            ans.push_back(val);
        }
        return ans;
    }
};
