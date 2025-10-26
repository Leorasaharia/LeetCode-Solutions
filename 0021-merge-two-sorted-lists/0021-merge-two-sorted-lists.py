class Solution(object):
    def mergeTwoLists(self, a, b):
        if not a or not b:
            return a or b
        if a.val<b.val:
            a.next=self.mergeTwoLists(a.next,b)
            return a
        else:
            b.next=self.mergeTwoLists(a,b.next)
            return b
