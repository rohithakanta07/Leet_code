class Solution:
    def maximizeSum(self, nums: List[int], k: int) -> int:
        maxx=max(nums)
        s=0
        for i in range(k):
            a=maxx
            s=s+a
            maxx=maxx+1
        return s