class Solution:
    def findDifference(self, nums1: List[int], nums2: List[int]) -> List[List[int]]:
        ans1=[]
        ans2=[]
        for i in nums1:
            if i in ans1:
                continue
            if i not in nums2:
                ans1.append(i)
        for i in nums2:
            if i in ans2:
                continue
            if i not in nums1:
                ans2.append(i)
        ans=[]
        ans.append(ans1)
        ans.append(ans2)
        return ans