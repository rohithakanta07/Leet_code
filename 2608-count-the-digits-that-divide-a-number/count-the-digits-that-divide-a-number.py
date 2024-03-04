class Solution:
    def countDigits(self, num: int) -> int:
        temp = num
        a=[]
        while(num):
            r = num%10
            a.append(r)
            num=num//10
        c = 0
        for i in range(len(a)):
            if temp%a[i] == 0 :
                c+=1 
        return c