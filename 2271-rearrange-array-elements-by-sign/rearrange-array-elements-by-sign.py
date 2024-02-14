class Solution:
    def rearrangeArray(self, nums: List[int]) -> List[int]:
        p=[]
        n=[]
        for i in range(0,len(nums)):
            if(nums[i]>0):
                p.append(nums[i])
            else:
                n.append(nums[i])
        f=[]
        for i in range(0,len(p)):
            f.append(p[i])
            f.append(n[i])
        return f