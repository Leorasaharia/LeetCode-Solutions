class Solution {
public:
    int count(ListNode* head){
        if(head==0){
            return 0;
        }
        int cnt=count(head->next);
        return cnt+1;
    }
    ListNode* middleNode(ListNode* head){
        int n=count(head)/2;
        while(n--){
            head=head->next;
        }
        return head;
    }
};
