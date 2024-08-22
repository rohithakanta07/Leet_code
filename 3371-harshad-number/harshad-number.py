class Solution:
    def sumOfTheDigitsOfHarshadNumber(self, x: int) -> int:
        s=0
        for i in str(x):
            s=s+int(i)
        if(x%s == 0):
            return s
        else:
            return -1