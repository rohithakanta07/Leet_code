class Solution:
    def minimumLength(self, s: str) -> int:
        i=0
        j=len(s)-1
        if(len(s)<=2):
            return len(s)
        s1=""
        if(s[i]!=s[j]):
            return len(s)
        while(i<j):
            if s[i]==s[j]:
                while(s[i]==s[i+1]):
                    i+=1
                    if(i==len(s)-1):
                        break
                
                while(s[j]==s[j-1]):
                    j-=1
                    if(j-1==0):
                        break
                s1=s[i+1:j]
                i+=1
                j-=1
            else:
                # s1=s[i+1:j]
                break
                # return len(s1)             
        return len(s1)
        