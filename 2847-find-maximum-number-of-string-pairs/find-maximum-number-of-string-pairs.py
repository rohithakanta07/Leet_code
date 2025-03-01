class Solution:
    def maximumNumberOfStringPairs(self, words: List[str]) -> int:
        c = 0
        for i in words:
            k=i[::-1]
            if k in words and len(set(k))==len(k):
                c+=1
        return c//2