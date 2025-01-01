class Solution:
    def maxScore(self, s: str) -> int:
        total_ones = 0
        for char in s:
            if char == '1':
                total_ones += 1
        left_zeros = 0
        right_ones = total_ones
        max_score = 0
        for i in range(len(s) - 1):
            if s[i] == '0':
                left_zeros += 1
            else:
                right_ones -= 1
            score = left_zeros + right_ones
            if score > max_score:
                max_score = score
        return max_score