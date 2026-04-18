class Solution:
    def mirrorDistance(self, n: int) -> int:
        s = int(str(n)[::-1])
        res = abs(n - s)
        return res
        