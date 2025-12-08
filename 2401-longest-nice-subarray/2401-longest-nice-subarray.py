class Solution(object):
    def longestNiceSubarray(self, nums):
        n=len(nums)
        if n==0:
            return None
        sub=1
        used=0
        left=0 
        for i in range(n):
            while used &nums[i]!=0:
                used^=nums[left]
                left+=1
            used|=nums[i]
            sub=max(sub,i-left+1)
        return sub

