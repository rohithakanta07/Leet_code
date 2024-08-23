class Solution:
    def minOperations(self, n: int) -> int:
        arr=[]
        for i in range(n):
            arr.append((2*i)+1)
        i=0
        j=n-1
        s=0
        while(i<j):
            k=(arr[j]+arr[i])//2
            s=s+(k-arr[i])
            i+=1
            j-=1
        return s