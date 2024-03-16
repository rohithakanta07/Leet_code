class Solution:
    def findMaxLength(self, nums: List[int]) -> int:
        d={}
        s=0
        for i in range(len(nums)):
            if(nums[i]==0):
                nums[i]=-1
        m=0
        for i in range(len(nums)):
            s=s+nums[i]
            if(s==0):
                m=i+1
            if s in d:
                m=max(m,i-d[s])
            else:
                d[s]=i
        return m
        
        # if(nums.count(0) == nums.count(1)):
        #     return len(nums)
        # i=0
        # while(i<len(nums)):
        #     j=len(nums)-1
        #     while(j>i):
        #         for k in range(i,j+1):
        #             if(nums.count(0) == nums.count(1)):
        #                 return len(nums[i:j+1])
        #         j-=1
        #     i+=1
        # return 0
       