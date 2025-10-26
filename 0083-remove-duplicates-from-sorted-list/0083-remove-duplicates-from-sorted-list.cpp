/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL){
            return NULL;
        }
        ListNode* a=head;
        ListNode* b=head->next;
        int end=head->val;
        while(b!=NULL){
            if(b->val==end){
                if(b->next==NULL){
                    a->next=NULL;
                    break;
                }
                b=b->next;
                a->next=b;
            }else{
                a=b;
                end=a->val;
                b=b->next;
            }
        }
        return head;
    }
};