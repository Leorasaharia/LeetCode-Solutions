class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        vector<int>ans;
        if(root==0){
            return ans;
        }
        queue<TreeNode*>q; 
        q.push(root);
        while(q.empty()==0){
            int n=q.size();
            for(int i=0;i<n;i++){
                auto temp=q.front(); 
                q.pop();
                if(temp->left){
                    q.push(temp->left);
                }
                if(temp->right){
                    q.push(temp->right);
                }
                if(i==n-1){
                    ans.push_back(temp->val);
                }
            }
        }
        return ans;
    }
};
