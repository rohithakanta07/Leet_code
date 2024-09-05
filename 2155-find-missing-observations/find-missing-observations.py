class Solution:
    def missingRolls(self, rolls: List[int], mean: int, n: int) -> List[int]:
        totallen=len(rolls)+n
        totalsum=totallen*mean
        remsum=totalsum-sum(rolls)
        a=[]
        if(6*n<remsum):
            return a
        else:
            while(n>0):
                b=int(remsum/n)
                remsum=remsum-b
                a.append(b)
                if(b <= 0):
                    return []
                n-=1
            return a