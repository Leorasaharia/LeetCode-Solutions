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
//subtree dp with bottom up approach
class Solution {
public:
    const int MOD=1000000007;
    long long mx=0;
    long long tot=0;
    int maxProduct(TreeNode* root) {
        //calculate tot sum
        tot=calculateSum(root);
        //find maxm product
        findMaxProduct(root);
        return mx%MOD;
    }
    //calculate total sum of all nodes
    long long calculateSum(TreeNode* node) {
        if(node==0){
            return 0;
        }
        return node->val+calculateSum(node->left)+calculateSum(node->right);
    }
    //removing all the eedges to find the maxm product
    long long findMaxProduct(TreeNode* node) {
        if(node==0){
            return 0;
        }
        long long left=findMaxProduct(node->left);
        long long right=findMaxProduct(node->right);
        long long curr=node->val+left+right;
        if(node->left){
            long long prod=left*(tot-left);
            mx=max(mx,prod);
        }
        if(node->right){
            long long prod=right*(tot-right);
            mx=max(mx,prod);
        }
        return curr;
    }
};