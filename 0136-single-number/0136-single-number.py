class Solution(object):
    def singleNumber(self, nums):
        for x in nums:
            if nums.count(x) == 1:
                return x
