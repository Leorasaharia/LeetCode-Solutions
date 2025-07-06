class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        //floyd cycle detection
        if(head==0||!head->next){
            return NULL;
        }
        ListNode *slow=head;
        ListNode *fast=head;
        while(fast && fast->next){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast){
                break;
            }
        }
        if(fast==0 || !fast->next){
            return NULL;
        }
        slow=head;
        while(slow!=fast){
            slow=slow->next;
            fast=fast->next;
        }
        return slow;
    }
};