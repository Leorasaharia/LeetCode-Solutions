class Solution {
public:
    TreeNode* sortedArrayToBST(vector<int>&nums){
        if(nums.size()==0){
            return NULL;
        }
        return build(nums,0,nums.size()-1);
    }

    TreeNode* build(vector<int>&a,int l,int r){
        if(l>r){
            return NULL;
        }
        int m=(l+r)/2;
        TreeNode*root=new TreeNode(a[m]);
        root->left=build(a,l,m-1);
        root->right=build(a,m+1,r);
        return root;
    }
};


