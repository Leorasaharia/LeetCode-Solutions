class Solution {
public:
    vector<double> averageOfLevels(TreeNode* r) {
        vector<double> a;
        stack<pair<TreeNode*,int>>stk;
        unordered_map<int,pair<double,int>> m;
        unordered_set<TreeNode*>v;
        stk.push({r,0});
        while(!stk.empty()){
            auto[n,l]=stk.top();
            stk.pop();
            if(v.count(n))continue;
            v.insert(n);
            m[l].first+=n->val;
            m[l].second++;
            if(n->right){
                stk.push({n->right,l+1});
            }
            if(n->left){
                stk.push({n->left,l+1});
            }
        }
        for(int i=0;m.count(i);i++)
            a.push_back(m[i].first/m[i].second);
        return a;
    }
};
