class Solution:
    def minPartitions(self, n: str) -> int:
        a=[]
        for i in n:
            a.append(int(i))
        return max(a)