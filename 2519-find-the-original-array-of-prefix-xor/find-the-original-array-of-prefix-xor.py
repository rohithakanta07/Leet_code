class Solution:
    
    def findArray(self, pref: List[int]) -> List[int]:
        p=[]
        p.append(pref[0])
        for i in range(1,len(pref)):
            p.append(pref[i-1]^pref[i])
        return p
        # for i in range(1,len(pref)):
        #     x=0
        #     for j in range(i):
        #         x=x^p[j]
        #     p.append(x^pref[i])
        # return p