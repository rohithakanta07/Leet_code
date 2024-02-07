class Solution:
    def frequencySort(self, s: str) -> str:
        d={}
        for i in s:
            if i not in d:
                d[i]=1
            else:
                d[i]+=1
        # (sorted(d.values))
        # print(d)
        # val=list(d.values())
        # val.sort()
        # dic = {i: d[i] for i in val}
        dic = dict(sorted(d.items(), key=operator.itemgetter(1)))
        ss=""
        for i in dic:
            while(dic[i]!=0):
                ss+=i
                dic[i]-=1
        return ss[::-1]    