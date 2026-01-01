class Solution(object):
    def plusOne(self, digits):
        n=0
        for dig in digits:
            n=n*10 + dig
        n+=1
        res=[]
        for dig in str(n):
            res.append(int(dig))
        return res
