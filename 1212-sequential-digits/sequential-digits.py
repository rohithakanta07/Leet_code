class Solution:
    def sequentialDigits(self, low: int, high: int) -> List[int]:
        l1 = len(str(low))
        l2 = len(str(high))
        final = []
        lst=[1,2,3,4,5,6,7,8,9]
        while(l1<=l2):
            for i in range(10-l1):
                s=0
                for j in range(i,i+l1):
                    s=s*10+lst[j]
                if s>= low  and s <=high:
                    final.append(s)
            l1+=1
        return final