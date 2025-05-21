class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
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
            if(curr->left){
                stk.push(curr->left);
            }
            if(curr->right){
                stk.push(curr->right);
            }
        }
        reverse(res.begin(),res.end());
        return res;
    }
};
