class Solution:
    def isSameAfterReversals(self, num: int) -> bool:
        if(num == 0):
            return True
        k=num%10
        if(k == 0):
            return False
        return True