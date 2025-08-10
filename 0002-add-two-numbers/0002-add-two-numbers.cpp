//converting the linked lists to arrays and then performing sum index by index
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        vector<int> a,b;
        while(l1!=0){ 
            a.push_back(l1->val); 
            l1=l1->next; 
        }
        while(l2!=0){
            b.push_back(l2->val); 
            l2=l2->next; 
        }
        int n=max(a.size(),b.size());
        int carry=0;
        ListNode *head=new ListNode(0);
        ListNode *p=head;
        for(int i=0;i<n||carry;i++){
            int x,y;
            if(i<a.size()){
                x=a[i];
            }
            else{
                x=0;
            }
            if(i<b.size()){
                y=b[i];
            }
            else{
                y=0;
            }
            int s=x+y+carry;
            p->next=new ListNode(s%10);
            p=p->next;
            carry=s/10;
        }
        return head->next;
    }
};
