class Solution:
    def addDigits(self, num: int) -> int:
        while(len(str(num))>1):
            sm=0
            while(num>0):
                n=num%10
                sm+=n
                num=num//10
            num=sm
        return num
