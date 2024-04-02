class Solution:
    def isIsomorphic(self, s: str, t: str) -> bool:
        # if len(set(s))==len(set(t)):
        #     return True
        # else:
        #     return False
        d1={}
        c1=1
        a1=[]
        for i in s:
            if i not in d1:
                d1[i]=c1
                a1.append(c1)
                c1+=1
            else:
                a1.append(d1[i])
        d2={}
        c2=1
        a2=[]
        for i in t:
            if i not in d2:
                d2[i]=c2
                a2.append(c2)
                c2+=1
            else:
                a2.append(d2[i])
        if(a1==a2):
            return True
        else:
            return False