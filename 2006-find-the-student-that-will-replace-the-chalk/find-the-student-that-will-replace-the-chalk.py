class Solution:
    def chalkReplacer(self, chalk: List[int], k: int) -> int:
        a=k%(sum(chalk))
        for i in range(len(chalk)):
            if a<chalk[i]:
                return i
            else:
                a = a - chalk[i]
        return 0