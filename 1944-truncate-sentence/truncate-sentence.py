class Solution:
    def truncateSentence(self, s: str, k: int) -> str:
        l=s.split(' ')
        return " ".join(l[:k])
        # s2=""
        # i=0
        # while(k!=0 or i < len(s)):
        #     if(s[i] == " "):
        #         k-=1
        #     s2=s2+s[i]
        #     i+=1
        # return s2