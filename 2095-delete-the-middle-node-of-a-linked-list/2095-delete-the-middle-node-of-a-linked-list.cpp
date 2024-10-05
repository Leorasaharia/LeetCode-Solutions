class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        if (!head || !head->next) return nullptr; 
        ListNode *start=head,*prog=head,*prev = nullptr;
        while(prog&&prog->next){
            prev=start;
            start=start->next;
            prog=prog->next->next;
        }
        prev->next=start->next;
        return head;
    }
};
