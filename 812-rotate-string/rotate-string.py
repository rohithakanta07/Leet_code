class Solution:
    def rotateString(self, s: str, goal: str) -> bool:
        c=0
        while(c<len(s) and goal!=s):
            ch=s[0]
            s=s[1:]
            s+=ch
            c+=1
        # print(s)
        # print(goal)
        if(s==goal):
            return True
        else:
            return False