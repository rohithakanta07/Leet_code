class Solution:
    def checkArithmeticSubarrays(self, nums: List[int], l: List[int], r: List[int]) -> List[bool]:
        ans=[]
        i=0
        while(len(ans)<len(l)):
            p=nums[l[i]:r[i]+1]
            p.sort()
            s=[]
            for ind in range(1,len(p)):
                s.append(p[ind]-p[ind-1])
            s1=set(s)
            if(len(s1)==1):
                ans.append(True)
            else:
                ans.append(False)
            i+=1
        return ans