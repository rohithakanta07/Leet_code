class Solution:
    def customSortString(self, order: str, s: str) -> str:
        if(order == ""):
            return s 
        ns=""
        d={}
        for i in s :
            if i not in d :
                d[i]=1
            else:
                d[i]+=1
        for i in order:
            if i in s:
                while(d[i]!=0):
                    ns+=i
                    d[i]-=1
        for i in d:
            while(d[i]!=0):
                ns+=i
                d[i]-=1
        return ns