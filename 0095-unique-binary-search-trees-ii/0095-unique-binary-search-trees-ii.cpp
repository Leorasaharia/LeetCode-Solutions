class Solution {
public:
    vector<TreeNode*>gT(int n,int s=1){
        vector<TreeNode*>a;
        if(n<s){
            return{nullptr};
        }
        for(int i=s;i<=n;i++){
            for(auto l:gT(i-1,s)){
                for(auto r:gT(n,i+1)) 
                    a.push_back(new TreeNode(i,l,r));
            }
        }
        return a;
    }
};
