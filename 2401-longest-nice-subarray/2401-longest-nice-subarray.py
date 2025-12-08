class Solution(object):
    def longestNiceSubarray(self, nums):
        n=len(nums)
        if n==0:
            return None
        sub=nums[0]
        for i in range(n):
            curr=0
            for j in range(i,n):
                curr^=nums[j]
                if curr>sub:
                    sub=curr
        return sub
        