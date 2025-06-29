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
    vector<int> findMode(TreeNode* root){
        vector<int>vals;
        vector<int>freqs;
        vector<int>res;
        bst(root,vals);
        for(int i=0;i<vals.size();i++){
            int val=vals[i];
            int cnt=0;
            for(int j=0;j<vals.size();j++){
                if(vals[j]==val){
                    cnt++;
                }
            }
            bool ans=false;
            for(int k=0;k<i;k++){
                if(vals[k]==val){
                    ans=true;
                    break;
                }
            }
            if(ans==0){
                freqs.push_back(cnt);
            }
        }
        int mx=0;
        for(int i=0;i<freqs.size();i++){
            if(freqs[i]>mx){
                mx=freqs[i];
            }
        }
        for(int i=0;i<vals.size();i++){
            int val=vals[i];
            bool added=false;
            for(int j=0;j<res.size();j++){
                if(res[j]==val){
                    added=true;
                    break;
                }
            }
            if(added==0){
                int cnt=0;
                for(int j=0;j<vals.size();j++){
                    if(vals[j]==val){
                        cnt++;
                    }
                }
                if(cnt==mx){
                    res.push_back(val);
                }
            }
        }
        return res;
    }
    void bst(TreeNode* node,vector<int>& vals){
        if(node==NULL){
            return;
        }
        vals.push_back(node->val);
        bst(node->left,vals);
        bst(node->right,vals);
    }
};