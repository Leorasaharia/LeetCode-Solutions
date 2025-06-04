class Solution {
public:
    string toBinaryList(ListNode* node) {
        if (!node->next) {
            return node->val ? "1" : "0";
        }
        if (node->val == 0) {
            return "0" + toBinaryList(node->next);
        } else {
            return "1" + toBinaryList(node->next);
        }
    }

    int getDecimalValue(ListNode* head) {
        string bin = toBinaryList(head);
        int val = 0;
        for (char c : bin) {
            val = val * 2 + (c - '0');
        }
        return val;
    }
};
