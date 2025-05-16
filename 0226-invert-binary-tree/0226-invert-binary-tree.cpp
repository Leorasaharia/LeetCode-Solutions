class Solution {
public:
    TreeNode* invertTree(TreeNode*root) {
        if(root==0){
            return 0;
        }
        TreeNode*l=invertTree(root->left);
        TreeNode*r=invertTree(root->right);
        TreeNode*temp=l;
        root->left=r;
        root->right=temp;
        return root;
    }
};
