class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head || !head->next || k==0) return head;
        
        int len = 0;
        ListNode* temp = head;
        while(temp){
            len++;
            temp = temp->next;
        }
        
        k %= len;
        if(k == 0) return head;

        for(int i = 0; i < k; i++){
            ListNode* prev = head;
            ListNode* last = NULL;

            while(prev->next){
                last = prev;
                prev = prev->next;
            }

            last->next = NULL;
            prev->next = head;
            head = prev;
        }
        
        return head;
    }
};
