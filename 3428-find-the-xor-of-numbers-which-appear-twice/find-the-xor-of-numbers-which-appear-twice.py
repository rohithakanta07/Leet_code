class Solution:
    def duplicateNumbersXOR(self, nums: List[int]) -> int:
        d={}
        for i in nums:
            if i in d:
                d[i]+=1
            else:
                d[i]=1
        x=0
        for i in d:
            if d[i]>1:
                x=x^i
        return x