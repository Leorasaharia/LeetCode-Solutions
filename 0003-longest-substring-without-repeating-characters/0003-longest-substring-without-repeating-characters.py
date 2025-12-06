class Solution(object):
    def lengthOfLongestSubstring(self, s):
        char={}
        l=0
        mx=0
        for r in range(len(s)):
            curr=s[r]
            if curr in char:
                if char[curr]>=l:
                    l=char[curr]+1
            char[curr]=r
            curr=r-l+1
            if curr>mx:
                mx=curr
        return mx