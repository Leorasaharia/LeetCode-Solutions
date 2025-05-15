class Solution {
public:
    unordered_set<int> set;
    bool findTarget(TreeNode* root, int k){
        if(root==0){
            return false;
        }
        if(set.count(k-root->val)){ 
            return true;
        }
        set.insert(root->val);
        return findTarget(root->left, k) || findTarget(root->right, k); 
    }
};
