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
#define n next
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* h) {
        ListNode *p=h;
        while(p&&p->n){
            if(p->val==p->n->val){
                p->n=p->n->n;
            }else{
                p=p->n;
            }
        }
        return h;
    }
};
