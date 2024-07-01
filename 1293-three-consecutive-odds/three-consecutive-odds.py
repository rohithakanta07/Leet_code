class Solution:
    def threeConsecutiveOdds(self, arr: List[int]) -> bool:
        c=[]
        s = 0
        for i in range(len(arr)):
            if ((arr[i]%2) != 0):
                s+=1
                c.append(s)
            else:
                s=0
                c.append(s)
        for i in range(len(c)):
            if(c[i]>=3):
                return True
        else:
            return False
