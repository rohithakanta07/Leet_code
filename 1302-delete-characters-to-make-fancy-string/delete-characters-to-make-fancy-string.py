class Solution:
    def makeFancyString(self, s: str) -> str:
        if(len(s)<=2):
            return s
        st=s[0:2]
        for i in range(2,len(s)):
            if(s[i]==s[i-1] and s[i-1]==s[i-2]):
                continue
            else:
                st+=s[i]
        return st
