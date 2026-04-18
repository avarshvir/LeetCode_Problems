class Solution:
    def mirrorDistance(self, n: int) -> int:
        original = n
        rev = 0
        while(n != 0):
            remainder = n % 10
            rev = rev * 10 + remainder
            n //= 10
        
        res = abs(original - rev)
        return res