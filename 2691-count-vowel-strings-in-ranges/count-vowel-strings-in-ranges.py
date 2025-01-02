class Solution:
    def vowelStrings(self, words: List[str], queries: List[List[int]]) -> List[int]:
        l=[]
        s=0
        for i in words:
            if(i[0] in "aeiou" and i[-1] in "aeiou"):
                s+=1
                l.append(s)
            else:
                l.append(s)
        res=[]
        for i in queries:
            if i[0]==0:
                res.append(l[i[1]])
            else:
                res.append(l[i[1]]-l[i[0]-1])
        return res                        