/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int d=0;
    int diameterOfBinaryTree(TreeNode* root) {
        height(root);
        return d;
    }
    int height(TreeNode* node){
        if(node==NULL){
            return 0;
        }
        int l_sub=height(node->left);
        int r_sub=height(node->right);
        int curr=l_sub+r_sub;
        d=max(d, curr);
        return 1+max(l_sub,r_sub);
    }
};
