class Solution:
    def uncommonFromSentences(self, s1: str, s2: str) -> List[str]:
        l1=list(s1.split(" "))
        l2=list(s2.split(" "))
        arr=[]
        # for i in l1:
        #     if i not in l2:
        #         arr.append(i)
        # for i in l2:
        #     if i not in l1:
        #         arr.append(i)
        d={}
        for i in l1:
            if i not in d:
                d[i]=1
            else:
                d[i]+=1
        for i in l2:
            if i not in d:
                d[i]=1
            else:
                d[i]+=1
        for i in d:
            if d[i]==1:
                arr.append(i)
        return arr