class Solution(object):
    def generate(self, n):
        r=[]
        for i in range(n):
            row=[1]*(i+1)
            for j in range(1, i):
                row[j]=r[i-1][j-1]+r[i-1][j]
            r.append(row)
        return r
