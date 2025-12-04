class Solution(object):
    def findPeakElement(self, nums):
        n=len(nums)
        for i in range(n):
            #check left side
            if i==0:
                left=True
            else:
                left=nums[i]>nums[i-1]
            #check right side
            if i==n-1:
                right=True
            else:
                right=nums[i]>nums[i+1]
            if left and right:
                return i
