class Solution:
    def maximumOddBinaryNumber(self, s: str) -> str:
        s0=""
        s1=""
        for i in range(len(s)):
            if(s[i]=='0'):
                s0+=s[i]
            else:
                s1+=s[i]
        sa=s1+s0
        ss=sa+"1"
        return ss[1::]