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
    void solve(TreeNode*root,vector<int>&v){
        if(root == NULL){
            return;
        }else{
            solve(root->left,v);
            v.push_back(root->val);
            solve(root->right,v);
        }
    }
    int getMinimumDifference(TreeNode* root) {
        vector<int>v;
        solve(root,v);
        int m=INT_MAX;
        for(int i=1;i<v.size();i++){
            int d=v[i]-v[i-1];
            m=min(m,d);
        }
        return m;
    }
};