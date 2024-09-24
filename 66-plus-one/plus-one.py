class Solution:
    def plusOne(self, digits: List[int]) -> List[int]:
        # digits=digits[::-1]
        num=0
        for i in digits:
            num=(num*10)+i
        num+=1
        a = [int(digit) for digit in str(num)]
        return a
