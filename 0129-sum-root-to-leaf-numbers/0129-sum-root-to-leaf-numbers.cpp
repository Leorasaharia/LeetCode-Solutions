class Solution {
public:
    int f(TreeNode*x,int y){
        if(x==NULL){
            return 0;
        }
        y=y*10+x->val;
        if(!x->left&&!x->right){
            return y;
        }
        return f(x->left,y)+f(x->right,y);
    }
    int sumNumbers(TreeNode*x){
        return f(x,0);
    }
};
