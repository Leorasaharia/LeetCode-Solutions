class Solution(object):
    def canConstruct(self, ransomNote, magazine):
        for ch in ransomNote:
            m=magazine.count(ch)
            r=ransomNote.count(ch)
            if m<r:
                return False
        return True
