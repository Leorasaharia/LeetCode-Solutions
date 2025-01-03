class Solution {
public:
    int maxDepth(TreeNode* root){
        if(root==NULL){
            return 0;
        }
        int m=max(maxDepth(root->left), maxDepth(root->right))+1;
        return m;
    }
};
