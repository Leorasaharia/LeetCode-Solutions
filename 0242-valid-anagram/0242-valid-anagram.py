class Solution(object):
    def isAnagram(self, s, t):
        dic={}
        n=len(s)
        m=len(t)
        if n!=m:
            return False
        for char in s:
            if char not in dic:
                dic[char]=1
            else:
                dic[char]+=1
        for char in t:
            if char in dic:
                dic[char]-=1
            else:
                return False
        for ans in dic.values():
            if ans!=0:
                return False
        return True

