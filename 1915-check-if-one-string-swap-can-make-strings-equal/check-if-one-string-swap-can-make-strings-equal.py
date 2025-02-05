class Solution:
    def areAlmostEqual(self, s1: str, s2: str) -> bool:
        c=0
        a=[]
        for i in range(len(s1)):
            if s1[i]!=s2[i]:
                c+=1
                a.append(s1[i])
                a.append(s2[i])
        if(c==0 or c==2) and(len(a)==0 or(a[0]==a[3] and a[1]==a[2])):
            return True
        else:
            return False