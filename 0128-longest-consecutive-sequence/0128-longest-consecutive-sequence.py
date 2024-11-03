class Solution(object):
    def longestConsecutive(self, nums):
        nmst=set(nums)
        lgst=0
        for n in nmst:
            if n- 1 not in nmst:
                curr=n
                l=1
                while curr+1 in nmst:
                    curr+=1
                    l+=1
                lgst= max(lgst,l)
        return lgst
