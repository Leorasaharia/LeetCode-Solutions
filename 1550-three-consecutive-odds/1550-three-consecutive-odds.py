class Solution(object):
    def threeConsecutiveOdds(self, arr):
        n=len(arr)
        cnt=0
        for i in arr:
            if i%2==1:
                cnt+=1
                if cnt==3: #we check if it contains 3 consecutive odd nums
                   return True
            else:
                cnt=0
        return False
        