class Solution:
    def findComplement(self, num: int) -> int:
        k=list(bin(num))
        k=k[2:]
        c=""
        for i in k:
            if (i=='0'):
                c=c+'1'
            else:
                c=c+'0'
        return int(str(c), 2)
        
