class Solution {
    ListNode* h;
    int n=0;
public:
    Solution(ListNode* head) {
        h=head;
        while(head){
            n++;
            head=head->next;
        }
    }
    
    int getRandom() {
        int x=rand()%n;
        ListNode* t=h;
        while(x--){
            t=t->next;
        }
        return t->val;
    }
};
