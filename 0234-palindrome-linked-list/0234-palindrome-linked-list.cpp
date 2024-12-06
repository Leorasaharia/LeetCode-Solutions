class Solution {
public:
    bool isPalindrome(ListNode* head) {
        if(!head||!head->next){
            return true;
        }
        ListNode*a=head,*b=head;
        while(b->next&&b->next->next){
            a=a->next;
            b=b->next->next;
        }
        ListNode*prev=nullptr,*curr=a->next;
        while(curr){
            ListNode*next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        ListNode*x=head,*y=prev;
        while(y){
            if(x->val!=y->val)return false;
            x=x->next;
            y=y->next;
        }
        return true;
    }
};
