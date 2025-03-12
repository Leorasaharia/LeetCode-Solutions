class Solution(object):
    def maxProfit(self, prices):
        mp,prof=float('inf'),0
        for i in prices:
            mp=min(mp,i)
            prof= max(prof,i-mp)
        return prof
