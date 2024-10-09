class Solution(object):
    def merge(self, intervals):
        intervals.sort(key=lambda x:x[0])
        arr=[]
        for i in intervals:
            if not arr or arr[-1][1]<i[0]:
                arr.append(i)
            else:
                arr[-1][1]=max(arr[-1][1],i[1])
        return arr
