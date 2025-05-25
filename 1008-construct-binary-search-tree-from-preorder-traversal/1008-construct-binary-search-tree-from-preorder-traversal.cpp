class Solution {
public:
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        int p=preorder.size();
        return build(preorder,0,p-1);
    }
    TreeNode* build(vector<int>& preorder, int preStart, int preEnd){
        if(preStart>preEnd){
            return NULL;
        }
        int val=preorder[preStart];
        TreeNode* root=new TreeNode(val);
        int i=preStart+1;
        while(i<=preEnd && preorder[i]<val){
            i++;
        }
        int leftSize = i-preStart-1;
        root->left=build(preorder,preStart+1,preStart+leftSize);
        root->right=build(preorder,preStart+leftSize+1,preEnd);
        return root;
    }
};
