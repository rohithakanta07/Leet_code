class Solution:
    def searchRange(self, nums: List[int], target: int) -> List[int]:
        a=[]
        if(nums.count(target)==0):
            return [-1,-1]
        elif nums.count(target)==1:
            a.append(nums.index(target))
            a.append(nums.index(target))
            return a
        else:
            a.append(nums.index(target))
            nums=nums[::-1]
            b=nums.index(target)
            a.append(len(nums)-b-1)
            return a