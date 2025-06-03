class Solution{
public:
    string optimalDivision(vector<int>&nums){
        int n=nums.size();
        string r;
        int v=nums[0];
        if(v==0)r.push_back('0');
        else{
            string t;
            while(v>0){
                int d=v%10;
                t.push_back('0'+d);
                v/=10;
            }
            for(int i=t.size()-1;i>=0;--i)r.push_back(t[i]);
        }
        if(n==1)return r;
        if(n==2){
            r.push_back('/');
            v=nums[1];
            if(v==0)r.push_back('0');
            else{
                string t;
                while(v>0){
                    int d=v%10;
                    t.push_back('0'+d);
                    v/=10;
                }
                for(int i=t.size()-1;i>=0;--i)r.push_back(t[i]);
            }
            return r;
        }
        r+="/(";
        for(int idx=1;idx<n;++idx){
            v=nums[idx];
            if(v==0)r.push_back('0');
            else{
                string t;
                while(v>0){
                    int d=v%10;
                    t.push_back('0'+d);
                    v/=10;
                }
                for(int i=t.size()-1;i>=0;--i)r.push_back(t[i]);
            }
            if(idx<n-1)r.push_back('/');
        }
        r.push_back(')');
        return r;
    }
};
