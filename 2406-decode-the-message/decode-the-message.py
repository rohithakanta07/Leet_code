class Solution:
    def decodeMessage(self, key: str, message: str) -> str:
        d={}
        i=0
        j=97
        while(i<len(key)):
            if(key[i]==" "):
                i+=1
                pass
            elif(key[i] not in d):
                d[key[i]]=chr(j)
                j+=1
                i+=1
            else:
                i+=1
                pass
        ans=""
        for c in message:
            for key,value in d.items():
                if c==" ":
                    ans+=" "
                    break
                elif c == key:
                    ans += value
                    break
        return ans