class Solution:
    
    def findArray(self, pref: List[int]) -> List[int]:
        p=[]
        p.append(pref[0])
        for i in range(0,len(pref)-1):
            p.append(pref[i]^pref[i+1])
        return p
        # for i in range(1,len(pref)):
        #     x=0
        #     for j in range(i):
        #         x=x^p[j]
        #     p.append(x^pref[i])
        # return p