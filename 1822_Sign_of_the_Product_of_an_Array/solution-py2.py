class Solution(object):
    def arraySign(self, nums):
        result = 1
        
        for i in nums:
            if i == 0:
                return 0
            elif i < 0:
                result = -result
        return result