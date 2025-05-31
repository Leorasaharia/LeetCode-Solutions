class Solution{
public:
    int widthOfBinaryTree(TreeNode*root){
        mx=0;
        left.clear();
        dfs(root,0,1);
        return mx;
    }
private:
    long long mx;
    vector<long long>left;
    void dfs(TreeNode*node,int depth,long long idx){
        if(node==0){
            return;
        }
        if(depth==left.size()){
            left.push_back(idx);
        }
        long long w=idx-left[depth]+1;
        if(w>mx){
            mx=w;
        }
        long long base=left[depth];
        long long b=idx-base;
        dfs(node->left,depth+1,b*2);
        dfs(node->right,depth+1,b*2+1);
    }
};