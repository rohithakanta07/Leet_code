class Solution:
    def balancedStringSplit(self, s: str) -> int:
        c=0
        ans=0
        for i in s:
            if i == 'L':
                c+=1
            else :
                c-=1
            if(c==0):
                ans+=1
        return ans