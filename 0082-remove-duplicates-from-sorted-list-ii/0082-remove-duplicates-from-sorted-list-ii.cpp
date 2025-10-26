class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL){
            return NULL;
        }
        ListNode* dummy=new ListNode(0,head);
        ListNode* a=dummy;
        ListNode* b=head;
        // int end=head->val;
        while(b!=NULL){
            bool dup=false;
            while(b->next!=NULL && b->val==b->next->val){
                dup=true;
                b=b->next;
            }if(dup!=0){
                a->next=b->next;
            }else{
                a=a->next;
            }
            b=b->next;
        }
        return dummy->next;;
    }
};