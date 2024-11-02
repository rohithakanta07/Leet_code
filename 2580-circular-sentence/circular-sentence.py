class Solution:
    def isCircularSentence(self, sentence: str) -> bool:
        l=list(sentence.split(" "))
        if(len(l)<2):
            if(sentence[-1]==sentence[0]):
                return True
            else:
                return False
        else:
            if(l[-1][-1] == l[0][0]):
                i=len(l)-1
                while i>0:
                    if(l[i][0] != l[i-1][-1]):
                        return False
                        break
                    i-=1
                return True
            else:
                return False