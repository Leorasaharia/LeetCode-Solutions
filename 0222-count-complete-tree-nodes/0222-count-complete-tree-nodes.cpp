class Solution {
public:
    int countNodes(TreeNode* root) {
        if(!root){
            return 0;
        }
        int lt=0,rt=0;
        TreeNode* left=root,*right=root;
        while(left){
            lt++;
            left=left->left;
        }
        while(right){
            rt++;
            right=right->right;
        }
        if(lt==rt){
            return(1<<lt)-1;
        }
        return 1+countNodes(root->left)+countNodes(root->right);
    }
};
