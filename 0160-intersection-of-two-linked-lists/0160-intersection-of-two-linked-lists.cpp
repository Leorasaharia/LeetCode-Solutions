class Solution {
public:
    ListNode *getIntersectionNode(ListNode *a, ListNode *b) {
        while(a){
            ListNode *t=b;
            while(t){
                if(a==t){
                    return a;
                }
                t=t->next;
            }
            a=a->next;
        }
        return NULL;
    }
};
