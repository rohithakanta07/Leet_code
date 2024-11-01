def shift(c: str, x: int) -> str:
    return chr(ord(c) + x)
    
class Solution:
    
    def replaceDigits(self, s: str) -> str:

        result = list(s)
        for i in range(1, len(s), 2):
            result[i] = shift(result[i - 1], int(result[i]))
        return ''.join(result)