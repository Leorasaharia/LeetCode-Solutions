class Solution:
    def isPalindrome(self, s: str) -> bool:
        s=s.lower()
        n=len(s)
        # applying the 2 pointers logic
        i=0 # starts from right
        j=n-1 #starts from the left
        while i<j:          
            if not s[i].isalnum():  #check if not in left
                i+=1      
                continue
            if not s[j].isalnum():  #when not in right
                j-=1         
                continue
            if s[i]!=s[j]:   #check if not a pal (left !=right)   
                return False         
            i+=1                   
            j-=1
        return True       