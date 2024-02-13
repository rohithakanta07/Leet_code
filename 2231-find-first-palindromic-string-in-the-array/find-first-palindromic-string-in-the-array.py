class Solution:
    def firstPalindrome(self, words: List[str]) -> str:
        for i in words:
            k = i[::-1]
            if i == k:
                return i
        else:
            return ""