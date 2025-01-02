class Solution {
public:
    bool isCousins(TreeNode* root, int x, int y){
        unordered_map<int, pair<int, TreeNode*>> hash;
        function<void(TreeNode*,TreeNode*, int)> dfs= [&](TreeNode* node, TreeNode* r,int dth){
            if(!node){
                return;
            }
            hash[node->val]={dth,r};
            dfs(node->left,node,dth+1);
            dfs(node->right,node,dth+1);
        };
        dfs(root,NULL,0);
        return hash[x].first==hash[y].first && hash[x].second!=hash[y].second;
    }
};
