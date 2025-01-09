class Solution(object):
    def isValid(a,s):
        st=[]
        ch={')':'(','}':'{',']':'['}
        for char in s:
            if char in ch:
                ele=st.pop() if st else '#'
                if ch[char]!=ele:
                    return False
            else:
                st.append(char)
        return not st