class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode*temp=new 
        ListNode(0,head),*curr=temp;
        while(curr->next){
            if(curr->next->val==val){
                curr->next=curr->next->next;
            }
            else{
                curr=curr->next;
            }
        }
        return temp->next;
    }
};
