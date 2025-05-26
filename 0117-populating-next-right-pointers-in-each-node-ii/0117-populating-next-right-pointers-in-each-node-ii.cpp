class Solution {
public:
    Node* connect(Node* root) {
        if(root==NULL){
            return NULL;
        }
        Node*l=root;
        while(l){
            Node*curr=l;
            Node*prev=NULL, *nextLevelStart=NULL;
            while(curr){
                if(curr->left){
                    if(prev){
                        prev->next=curr->left;
                    }
                    else{
                        nextLevelStart=curr->left;
                    }
                    prev=curr->left;
                }
                if(curr->right){
                    if(prev){
                        prev->next=curr->right;
                    }
                    else{
                        nextLevelStart=curr->right;
                    }
                    prev=curr->right;
                }
                curr=curr->next;
            }
            l=nextLevelStart;
        }
        return root;
    }
};
