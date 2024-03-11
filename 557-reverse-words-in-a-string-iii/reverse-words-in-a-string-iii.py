class Solution:
    def reverseWords(self, s: str) -> str:
        a=s.split(" ")
        k=[]
        for i in a :
            k.append(i[::-1])
        return " ".join(k)
        # return ss