class Solution:
    def dominantIndex(self, nums: List[int]) -> int:
        a=max(nums)
        ind=nums.index(a)
        nums.remove(a)
        b=max(nums)
        if(a>=b*2):
            return ind
        else:
            return -1