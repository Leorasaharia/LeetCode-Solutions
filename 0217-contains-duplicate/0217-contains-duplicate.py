# class Solution(object):
#     def containsDuplicate(self, nums):
#         for x in nums:
#             if nums.count(x)>1:
#                 return True
#             # else:
#             #     return False
#         return False


class Solution(object):
    def containsDuplicate(self, nums):
        nums.sort()
        for i in range(1,len(nums)):
            if nums[i]==nums[i-1]:
                return True
            # else:
            #     return False
        return False
