class Solution {
public:
    ListNode* insertionSortList(ListNode* head) {
        if(head==NULL||head->next==NULL){
            return head;
        }
        ListNode* temp=new ListNode(-1);
        temp->next=NULL;
        while(head!=NULL){
            ListNode* cur=head;
            head=head->next;
            ListNode* prev=temp;
            ListNode* curr=temp->next;
            for(ListNode* i=curr;i!=NULL;i=i->next){
                if(cur->val<i->val){
                    break;
                }
                prev=i;
            }
            if(prev->next==NULL){
                prev->next=cur;
                cur->next=NULL;
            }else{
                cur->next=prev->next;
                prev->next=cur;
            }
        }
        return temp->next;
    }
};
