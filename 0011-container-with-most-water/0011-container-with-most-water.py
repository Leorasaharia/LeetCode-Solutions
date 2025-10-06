class Solution:
    def maxArea(self, height):
        l=0
        b=len(height)-1
        ar=0
        while l<b:
            w=b-l
            m=min(height[l], height[b])
            cur= w*m
            ar= max(ar,cur)
            if height[l]<height[b]:
                l+=1
            else:
                b-=1
        return ar
if __name__ == "__main__":
    sol = Solution()