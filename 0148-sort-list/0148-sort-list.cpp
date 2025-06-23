class Solution {
public:
    ListNode* sortList(ListNode* head) {
        if(head==NULL||head->next==NULL)return head;
        ListNode* slow=head;
        ListNode* fast=head->next;
        while(fast&&fast->next){
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* mid=slow->next;
        slow->next=NULL;
        ListNode* left=sortList(head);
        ListNode* right=sortList(mid);
        return merge(left,right);
    }

    ListNode* merge(ListNode* l1,ListNode* l2) {
        ListNode* temp=new ListNode(0);
        ListNode* cur=temp;
        while(l1&&l2){
            if(l1->val<l2->val){
                cur->next=l1;
                l1=l1->next;
            }else{
                cur->next=l2;
                l2=l2->next;
            }
            cur=cur->next;
        }
        if(l1){
            cur->next=l1;
        }else{
            cur->next=l2;
        }
        return temp->next;
    }
};
