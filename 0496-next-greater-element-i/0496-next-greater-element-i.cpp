class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n=nums2.size();
        vector<int> res(n,-1),temp;
        for(int i=n-1;i>=0;--i){
            while(!temp.empty() && temp.back()<=nums2[i]){
                temp.pop_back();
            }
            if(temp.empty()==0){
                res[i]=temp.back();
            }
            temp.push_back(nums2[i]);
        }
        vector<int> ans;
        for(int i=0;i<nums1.size();++i){
            for(int j=0;j<n;++j){
                if(nums2[j]==nums1[i]){
                    ans.push_back(res[j]);
                    break;
                }
            }
        }
        return ans;
    }
};
