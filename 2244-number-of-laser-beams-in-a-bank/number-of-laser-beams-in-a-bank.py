class Solution:
    def numberOfBeams(self, bank: List[str]) -> int:
        a=[]
        for i in range(len(bank)):
            if(bank[i].count('1') != 0):
                a.append(bank[i].count('1'))
        #[3,2,1]
        s=0
        if(len(a)==1):
            return 0
        for i in range(len(a)-1):
            j=i+1
            prod=a[j]*a[i]
            s=s+prod
        return s
