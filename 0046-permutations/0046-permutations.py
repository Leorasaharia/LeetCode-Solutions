class Solution(object):
    def permute(self, nums):
        res=[]
        n=len(nums)
        stk=[(nums[:],0)]
        while stk:
            nums,pos=stk.pop()
            if pos==n:
                res.append(nums[:])
            else:
                for i in range(pos,n):
                    nums[pos],nums[i]=nums[i],nums[pos]
                    stk.append((nums[:],pos+1))
                    nums[pos],nums[i]=nums[i],nums[pos]
        return res
