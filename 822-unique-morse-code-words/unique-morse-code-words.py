class Solution:
    def uniqueMorseRepresentations(self, words: List[str]) -> int:
        arr=[".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."]
        d={}
        for i in (words):
            s=""
            for j in i:
                s= s + (arr[ord(j)-ord('a')])
            if i not in d:
                d[s]=1
            s=""
        return len(d)