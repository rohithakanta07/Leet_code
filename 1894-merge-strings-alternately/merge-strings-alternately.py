class Solution:
    def mergeAlternately(self, word1: str, word2: str) -> str:
        s=""
        for i in range(min(len(word1),len(word2))):
            s+=word1[i]
            s+=word2[i]
        if(len(word1)>len(word2)):
            i=len(word2)
            while(i<len(word1)):
                s+=word1[i]
                i+=1
        else:
            i=len(word1)
            while(i < len(word2)):
                s+=word2[i]
                i+=1
        return s