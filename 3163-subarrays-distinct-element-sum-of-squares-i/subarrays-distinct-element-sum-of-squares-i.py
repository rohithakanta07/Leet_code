class Solution:
    def sumCounts(self, nums: List[int]) -> int:
        s=0
        for i in range(len(nums)):
            for j in range(i,len(nums)):
                a=len(set(nums[i:j+1]))
                s=s+(a*a)
        return s