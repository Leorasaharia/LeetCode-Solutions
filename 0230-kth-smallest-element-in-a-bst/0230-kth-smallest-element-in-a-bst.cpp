class Solution {
public:
    int cnt=0;
    int res=0;
    int kthSmallest(TreeNode* root, int k) {
        inorder(root,k);
        return res;
    }
    void inorder(TreeNode* root,int k){
        if(root==NULL){
            return;
        }
        inorder(root->left,k);
        cnt++;
        if(cnt==k){
            res=root->val;
        }
        inorder(root->right,k);
    }
};
