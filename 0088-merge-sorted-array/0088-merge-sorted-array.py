class Solution(object):
    def merge(self, nums1, m, nums2, n):
        a,b,c=m-1,n-1,m+n-1
        while a>=0 and b>=0:
            if nums1[a]>nums2[b]:
                nums1[c]=nums1[a]
                a-=1
            else:
                nums1[c]=nums2[b]
                b-=1
            c-=1
        while b>=0:
            nums1[c] = nums2[b]
            b-=1
            c-=1