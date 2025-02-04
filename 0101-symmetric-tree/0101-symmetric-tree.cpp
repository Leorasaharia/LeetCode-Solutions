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
            bool lf=isSymm(l->left,r->right);
            bool rt=isSymm(l->right,r->left);
            return lf && rt;
        }
        return false;
    }
};
