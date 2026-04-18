class Solution(object):
    def mirrorDistance(self, n):
        """
        :type n: int
        :rtype: int
        """
        s = int(str(n)[::-1])
        res = abs(s - n)
        return res