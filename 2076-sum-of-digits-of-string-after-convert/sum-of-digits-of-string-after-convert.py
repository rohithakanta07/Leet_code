class Solution:
    def getLucky(self, s: str, k: int) -> int:
        s2=""
        for i in range(len(s)):
            s2=s2 + str(ord(s[i])-ord('a')+1)
        ans=int(s2)
        while(k!=0):
            ans=sum(map(int, str(ans)))
            k-=1
        return ans
        