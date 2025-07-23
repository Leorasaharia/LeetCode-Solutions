class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        vector<int>list;
        int k=lists.size();
        for(int i=0;i<k;i++) {
            ListNode* node=lists[i];
            while(node!=NULL) {
                list.push_back(node->val);
                node=node->next;
            }
        }
        sort(list.begin(),list.end());
        ListNode* dum=new ListNode(0);
        ListNode* prev=dum;
        int n=list.size();
        for(int i=0;i<n;i++) {
            prev->next=new ListNode(list[i]);
            prev=prev->next;
        }
        return dum->next;
    }
};
