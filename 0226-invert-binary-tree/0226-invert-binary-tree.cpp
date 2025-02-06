class Solution {
public:
    TreeNode* invertTree(TreeNode* r) {
        if(!r){
            return r;
        }
        swap(r->left, r->right);
        invertTree(r->left);
        invertTree(r->right);
        return r;
    }
};
