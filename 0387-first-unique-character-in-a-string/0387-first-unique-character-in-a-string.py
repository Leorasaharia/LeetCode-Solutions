# class Solution(object):
#     def firstUniqChar(self, s):
#         for i in range(len(s)):
#             if s.count(s[i])==1:
#                 return i
#         return -1


class Solution(object):
    def firstUniqChar(self, s):
        freq={}
        for ch in s:
            if ch in freq:
                freq[ch]+=1
            else:
                freq[ch]=1
        for i in range(len(s)):
            if freq[s[i]]==1:
                return i
        return -1
