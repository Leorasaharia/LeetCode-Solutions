class Solution(object):
    def frequencySort(self, s):
        #creating a dictionary and manually counting the chars that appear more than ones 
        freq={}
        for ch in s:
            if ch in freq:
                freq[ch]+=1
            else:
                freq[ch]=1
        res=[]
        for ch in freq:
            res.append([ch,freq[ch]])
        n=len(res)
        for i in range(n):
            mx=i
            for j in range(i+1,n):
                if res[j][1]>res[mx][1]:
                    mx=j
            res[i],res[mx]=res[mx],res[i]
        ans=""
        for ch,f in res:
            ans+=ch*f
        return ans
