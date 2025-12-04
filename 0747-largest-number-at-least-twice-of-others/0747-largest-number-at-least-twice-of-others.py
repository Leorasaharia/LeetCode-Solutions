class Solution(object):
    def dominantIndex(self, nums):
        n=len(nums)
        # if n==0:
        #     return -1
        # finding max value and its index
        mx=nums[0]
        idx=0
        for i in range(1,n):
            if nums[i]>mx:
                mx=nums[i]
                idx=i
        #check if mx is at least twice every other element
        for i in range(n):
            if i==idx:
                continue
            if mx<2*nums[i]:
                return -1
        return idx
