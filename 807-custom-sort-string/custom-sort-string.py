class Solution:
    def customSortString(self, order: str, s: str) -> str:
        if(order == ""):
            return s 
        news=""
        d={}
        for i in s :
            if i not in d :
                d[i]=1
            else:
                d[i]+=1
        for i in order :
            if i in s :
                while(d[i]!=0):
                    news=news+i
                    d[i]-=1
        # for i in d:
        #     if d[i]!=0:
        #         news+=i
        #         d[i]-=1
        for i in d:
            while(d[i]!=0):
                news+=i
                d[i]-=1
        return news