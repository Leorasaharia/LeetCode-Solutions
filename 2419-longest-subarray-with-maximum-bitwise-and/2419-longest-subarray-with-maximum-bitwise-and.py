class Solution(object):
    def longestSubarray(self, nums):
        mv=max(nums)
        l=curr=0
        for n in nums:
            if n==mv:
                curr+= 1
                l= max(l,curr)
            else:
                curr=0
        return l
