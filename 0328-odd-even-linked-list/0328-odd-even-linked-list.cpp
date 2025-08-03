class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if(head==0){
            return head;
        }
        if(head->next==0){
            return head;
        }
        ListNode* od=head;
        ListNode* ev=head->next;
        ListNode* evhead=ev;
        while(ev && ev->next){
            od->next=ev->next;
            od=od->next;
            ev->next=od->next;
            ev=ev->next;
        }
        od->next=evhead;
        return head;
    }
};
