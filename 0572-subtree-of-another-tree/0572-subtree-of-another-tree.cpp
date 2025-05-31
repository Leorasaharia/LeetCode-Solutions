class Solution {
public:
    bool isSame(TreeNode* root, TreeNode* subRoot) {
        if(root==0 && subRoot==0){
            return true;
        }
        if(root==0 || subRoot==0){
            return false;
        }
        if(root->val != subRoot->val){
            return false;
        }
        return isSame(root->left,subRoot->left) && isSame(root->right,subRoot->right);
    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot){
        if(root==0){
            return false;
        }
        if(isSame(root,subRoot)){
            return true;
        }
        return isSubtree(root->left, subRoot)||isSubtree(root->right, subRoot);
    }
};