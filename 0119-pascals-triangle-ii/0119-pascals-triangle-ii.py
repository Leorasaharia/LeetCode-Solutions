class Solution(object):
    def getRow(self, rowIndex):
        r=[1]*(rowIndex+1)
        for i in range(1,rowIndex):
            for j in range(i,0,-1):
                r[j]+=r[j-1]
        return r
