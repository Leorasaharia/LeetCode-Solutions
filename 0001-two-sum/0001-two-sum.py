class Solution:
    def twoSum(self, nums, target):
        nm={}
        for i, n in enumerate(nums):
            a = target-n
            if a in nm:
                return [nm[a], i]
            nm[n]=i
if __name__ == "__main__":
    sol = Solution()
    print(sol.twoSum([2, 7, 11, 15], 9))  
    print(sol.twoSum([3, 2, 4], 6))       
    print(sol.twoSum([3, 3], 6))          
