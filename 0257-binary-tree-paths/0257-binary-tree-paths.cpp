class Solution {
public:
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> paths;
        if(root==NULL){
            return paths;
        }
        if(!root->left && !root->right){
            paths.push_back(to_string(root->val));
            return paths;
        }
        if(root->left){
            vector<string> leftpath=binaryTreePaths(root->left);
            int l=leftpath.size();
            for(int i=0;i<l;i++){
                paths.push_back(to_string(root->val) + "->" + leftpath[i]);
            }
        }
        if (root->right) {
            vector<string> rightpath=binaryTreePaths(root->right);
            int r=rightpath.size();
            for(int i=0;i<r;i++){
                paths.push_back(to_string(root->val) + "->" + rightpath[i]); 
            }
        }
        return paths;
    }
};
