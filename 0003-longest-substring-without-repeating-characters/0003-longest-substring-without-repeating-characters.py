class Solution(object):
    def lengthOfLongestSubstring(self, s):
        char=set()
        maxlength=0
        start=0
        for end in range(len(s)):
            while s[end] in char:
                char.remove(s[start])
                start+=1
            char.add(s[end])
            maxlength=max(maxlength, end-start+1)
        return maxlength
