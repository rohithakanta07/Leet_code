class Solution:
    def validStrings(self, n: int) -> List[str]:
        if(n==1):
            ans=[]
            ans.append("0")
            ans.append("1")
            return ans
        else:
            a=[]
            for i in range(1,int(math.pow(2,n))):
                k=str(bin(i))[2:]
                while(len(k)!=n):
                    k="0"+k
                if "00" not in k :
                    a.append(k)
            return a

            # if "00" not in k :
            #         if(len(k)<n):
            #             while(len(k)!=n):
            #                 k="0"+k
            #         a.append(k)