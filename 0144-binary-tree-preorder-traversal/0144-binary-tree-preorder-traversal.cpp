class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> res;
        if(root==0){
            return res;
        }
        stack<TreeNode*> stk;
        stk.push(root);
        while(!stk.empty()){
            TreeNode* curr=stk.top();
            stk.pop();
            res.push_back(curr->val);
            if(curr->right){
                stk.push(curr->right);
            }
            if(curr->left){
                stk.push(curr->left);
            }
        }
        return res;
    }
};
