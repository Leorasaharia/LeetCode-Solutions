class Solution {
public:
    unordered_map<TreeNode*,int>mp;
    int rob(TreeNode* root){
        if(root==NULL){
            return 0;
        }
        if(mp.find(root) != mp.end()){
            return mp[root];
        }
        int r=root->val;
        if(root->left){
            r+=rob(root->left->left) + rob(root->left->right);
        }
        if(root->right){
            r+=rob(root->right->left) + rob(root->right->right);
        }
        int skip=rob(root->left) + rob(root->right);
        mp[root]=max(r,skip);
        return mp[root];
    }
};