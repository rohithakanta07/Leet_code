class Solution:
    def canBeEqual(self, target: List[int], arr: List[int]) -> bool:
        for i in target:
            if i in arr:
                if arr.count(i)!=target.count(i):
                    return False
            else:
                return False
        return True