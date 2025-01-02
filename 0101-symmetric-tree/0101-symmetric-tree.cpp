class Solution {
public:
    bool isSymmetric(TreeNode* r){
        return isSymm(r,r);
    } 
private:
    bool isSymm(TreeNode* l,TreeNode* r){
        if(!l &&!r){
            return true;
        }
        if(l&&r&&l->val==r->val){
            bool left_sym = isSymm(l->left,r->right);
            bool right_sym = isSymm(l->right,r->left);
            return left_sym && right_sym;
        }
        return false;
    }
};
//tc=o(n)