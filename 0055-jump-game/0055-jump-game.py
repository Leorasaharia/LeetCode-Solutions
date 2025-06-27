class Solution(object):
    def canJump(self, nums):
        m=0
        for i in range(len(nums)):
            if i>m:
                return False
            m=max(m,i+nums[i])
        return True
