class Solution {
public:
    bool hasPathSum(TreeNode* root,int targetSum){
        if(root==NULL){
            return 0;
        }
        if(root->val==targetSum &&root->left==NULL&&root->right==NULL){
            return 1;
        }
        if(root->left!=NULL){
            if(hasPathSum(root->left,targetSum-root->val)){
                return 1;
            }
        }
        if(root->right!=NULL){
            if(hasPathSum(root->right,targetSum-root->val)){
                return 1;
            }
        }
        return 0;
    }
};
