class Solution {
public:
    int maxsum;
    int maxPathSum(TreeNode* root) {
        maxsum=INT_MIN;
        findPathSum(root);
        return maxsum;
    }
    int findPathSum(TreeNode* node) {
        if (node==NULL){
            return 0;
        }
        int left=max(0,findPathSum(node->left));
        int right=max(0,findPathSum(node->right));
        int curr=node->val + left + right;
        maxsum=max(maxsum,curr);
        return node->val + max(left,right);
    }
};
