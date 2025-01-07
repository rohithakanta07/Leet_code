class Solution:
    def stringMatching(self, words: List[str]) -> List[str]:
        a=[]
        for i in words:
            for j in words:
                if(i==j):
                    continue
                if j in i and j not in a:
                    a.append(j)
               
        return a