class Solution:
    def thirdMax(self, nums: List[int]) -> int:
        first = second = third = None
        for x in nums:
            if x == first or x == second or x == third:
                continue
            if first is None or x > first:
                third = second
                second = first
                first = x
            elif second is None or x > second:
                third = second
                second = x
            elif third is None or x > third:
                third = x
        return first if third is None else third
