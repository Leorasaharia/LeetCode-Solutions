class Solution {
public:
    void reorderList(ListNode* head) {
        if(!head||!head->next||!head->next->next)return;
        ListNode*a=head,*b=head;
        while(b->next&&b->next->next){
            a=a->next;
            b=b->next->next;
        } ListNode*prev=nullptr,*curr=a->next;
        a->next=nullptr;
        while(curr){
            ListNode*next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        ListNode*x=head,*y=prev;
        while(y){
            ListNode*var=x->next,*var2=y->next;
            x->next=y;
            y->next=var;
            x=var;
            y=var2;
        }
    }
};
