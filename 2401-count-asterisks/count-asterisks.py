class Solution:
    def countAsterisks(self, s: str) -> int:
        flag=0
        arr=[]
        arr2=[]
        for i in range(len(s)):
            if(s[i]=='|'):
                if(flag==0):
                    flag=1
                    arr.append(i)
                else:
                    flag=0
                    arr2.append(i)
        if(len(arr)==0):
            return s.count('*')
        else:
            c=0 
            a1=s[0:arr[0]]
            c+=a1.count('*')
            a2=s[arr2[len(arr2)-1]+1:len(s)]
            c+=a2.count('*')
            i=0
            while(i+1<len(arr)):
                array=s[arr2[i]:arr[i+1]]
                c+=array.count('*')
                i+=1
            return c

        #     c=0
        #     a1=s[0:arr[0]]
        #     c+=a1.count('*')
        #     a2=s[arr2[len(arr2)-1]: len(s)]
        #     c+=a2.count('*')
        #     return c
        #     i=0
        #     while(i<len(arr) and i+1<len(arr)):
        #         array=s[arr[i]:arr2[i+1]]
        #         c+=array.count('*')
        #         i+=1
        #         for k in range(arr[i] , arr2[i+1]):
        #             if(s[k] == '*'):
        #                 c+=1
        #         i+=1
        # return c
           