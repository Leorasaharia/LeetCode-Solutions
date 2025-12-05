class Solution:
    def trap(self, height: List[int]) -> int:
        l=0
        r=len(height)-1
        lm=0
        rm=0
        ans=0
        while l<=r:
            if height[l]<height[r]:
                if height[l]>=lm:
                    lm=height[l]
                else:
                    ans+=lm-height[l]
                l+=1
            else:
                if height[r]>=rm:
                    rm=height[r]
                else:
                    ans+=rm-height[r]
                r-=1
        return ans
