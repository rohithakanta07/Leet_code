class Solution:
    def countSubstrings(self, s: str) -> int:
        c=0
        for i in range(len(s)):
            for j in range(i,len(s)):
                ss=s[i:j+1]
                rss=ss[::-1]
                if(ss == rss):
                    c+=1
        return c