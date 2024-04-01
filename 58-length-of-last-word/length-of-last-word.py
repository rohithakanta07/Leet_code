class Solution:
    def lengthOfLastWord(self, s: str) -> int:
        ns=s[::-1]
        nss=ns.lstrip() 
        c=0
        for i in range(len(nss)):
            if nss[i]==" ":
                break
            else:
                c+=1
        return c