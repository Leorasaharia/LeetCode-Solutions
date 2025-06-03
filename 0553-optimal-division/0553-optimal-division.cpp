class Solution{
public:
    string optimalDivision(vector<int>&nums){
        int n=nums.size();
        auto add=[&](int x,string& s){        //converting the integre to string 
            if(x==0){
                s.push_back('0');
                return;
            }
            string t;
            while(x){
                t.push_back('0'+x%10);
                x/=10;
            }
            for(int i=t.size()-1;i>=0;--i){
                s.push_back(t[i]);
            }
        };
        string ans;
        if(n==1){
            add(nums[0],ans);
            return ans;
        }
        else if(n==2){
            add(nums[0],ans);
            ans.push_back('/');
            add(nums[1],ans);
            return ans;
        }
        else{
            add(nums[0],ans);
            ans.push_back('/');
            ans.push_back('(');
            for(int i=1;i<n-1;++i){
                add(nums[i],ans);
                ans.push_back('/');
            }
            add(nums[n-1],ans);
            ans.push_back(')');
            return ans;
        }
    }
};
