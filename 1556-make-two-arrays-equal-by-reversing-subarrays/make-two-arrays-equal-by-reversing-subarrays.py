class Solution:
    def canBeEqual(self, target: List[int], arr: List[int]) -> bool:
        # for i in target:
        #     if i in arr:
        #         if arr.count(i)!=target.count(i):
        #             return False
        #     else:
        #         return False
        # return True
        c=0 
        d={}
        for i in arr:
            if i not in d:
                d[i]=1
            else:
                d[i]+=1
        # print(d)
        for  i in d:
            if i in target:
                d[i]-=target.count(i)
        for i in d:
            if(d[i]!=0):
                return False
        return True
        # print(d)
        # return True
