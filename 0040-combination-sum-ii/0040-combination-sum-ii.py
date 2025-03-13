class Solution(object):
    def combinationSum2(self, c, t):
        c.sort()
        res=[]
        stk=[(0, [], 0)]
        while stk:
            i,var,sm = stk.pop()
            if sm==t:
                res.append(var)
                continue
            if sm>t or i==len(c):
                continue
            for j in range(i,len(c)):
                if j>i and c[j]==c[j-1]:
                    continue
                stk.append((j+1,var+[c[j]],sm+c[j]))
        return res
