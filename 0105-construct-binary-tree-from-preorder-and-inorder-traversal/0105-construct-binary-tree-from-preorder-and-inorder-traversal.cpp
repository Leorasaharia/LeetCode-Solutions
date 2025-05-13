class Solution {
public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int p=preorder.size();
        int in=inorder.size();
        return build(preorder,0,p-1,inorder,0,in-1);
    }
    TreeNode* build(vector<int>& preorder, int preStart, int preEnd, vector<int>& inorder, int inStart, int inEnd){
        if(preStart>preEnd || inStart>inEnd){
            return nullptr;
        }
        int val=preorder[preStart];
        TreeNode* root=new TreeNode(val);
        int inRoot=-1;
        for (int i=inStart;i<=inEnd;i++) {
            if (inorder[i]==val) {
                inRoot=i;
                break;
            }
        }
        int leftSize=inRoot-inStart;
        root->left = build(preorder, preStart + 1, preStart + leftSize,
                           inorder, inStart, inRoot - 1);
        root->right = build(preorder, preStart + leftSize + 1, preEnd,
                            inorder, inRoot + 1, inEnd);

        return root;
    }


};
