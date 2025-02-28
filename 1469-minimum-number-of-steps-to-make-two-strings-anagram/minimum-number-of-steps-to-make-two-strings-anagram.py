class Solution:
    def minSteps(self, s: str, t: str) -> int:
        d={}
        d2={}
        for i in t:
            if i in d:
                d[i]+=1
            else:
                d[i]=1
        for i in s:
            if i in d2:
                d2[i]+=1
            else:
                d2[i]=1
        cnt=0
        for i in d:
            if i not in d2:
                cnt+=d[i]
            else:
                if(d2[i]<=d[i]):
                    cnt+=d[i]-d2[i]
        return cnt