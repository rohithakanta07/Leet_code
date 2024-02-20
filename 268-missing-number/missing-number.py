class Solution:
    def missingNumber(self, nums: List[int]) -> int:
        s=sum(nums)
        a=len(nums)
        t=(a*(a+1))//2
        return t-s