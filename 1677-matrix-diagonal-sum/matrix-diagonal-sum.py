class Solution:
    def diagonalSum(self, mat: List[List[int]]) -> int:
        if(len(mat)==1):
            return mat[0][0]
        if(len(mat)%2 == 0):
            s1=0
            for i in range(len(mat)):
                for j in range(len(mat)):
                    if(i==j):
                        s1+=mat[i][j]
                    if(i == len(mat)-j-1):
                        s1+=mat[i][j]
            return s1
        else:
            m=mat[len(mat)//2][len(mat)//2]
            s2=0
            for i in range(len(mat)):
                for j in range(len(mat)):
                    if(i==j):
                        s2+=mat[i][j]
                    if(i == len(mat)-j-1):
                        s2+=mat[i][j]
            return s2-m