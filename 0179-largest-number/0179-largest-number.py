class Solution(object):
    def largestNumber(self, nums):
        nums=list(map(str, nums))
        for i in range(len(nums)):
            for j in range(len(nums)-1):
                if nums[j]+nums[j+1] < nums[j+1]+nums[j]:
                    nums[j],nums[j+1] = nums[j+1],nums[j]
        if nums[0]=='0':
            return '0'
        return ''.join(nums)
