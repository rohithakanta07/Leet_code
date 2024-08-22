class Solution:
    def findComplement(self, num: int) -> int:
        k=list(bin(num))
        k=k[2:]
        ans=[]
        for i in k:
            if (i=='0'):
                ans.append('1')
            else:
                ans.append('0')
        c=""
        for i in ans:
            c=c+i
        return int(str(c), 2)
        
