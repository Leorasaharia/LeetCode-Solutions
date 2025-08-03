class Solution {
public:
    TreeNode* prev=NULL;
    void flatten(TreeNode* root){
        if(root==0){
            return;
        }
        flatten(root->right);
        flatten(root->left);
        root->right=prev;
        root->left=NULL;
        prev=root;
    }
};
