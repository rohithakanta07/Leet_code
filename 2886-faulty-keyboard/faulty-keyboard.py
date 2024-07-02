class Solution:
    def finalString(self, s: str) -> str:
        ns=""
        for i in s:
            if i !='i':
                ns=ns+i
            else:
                ns=ns[::-1]
        return ns