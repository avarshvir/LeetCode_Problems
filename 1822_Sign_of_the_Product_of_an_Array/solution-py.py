class Solution(object):
    def arraySign(self, nums):
        result = 1
        
        for i in range(len(nums)):
            if nums[i] == 0:
                return 0
            elif nums[i] < 0:
                result = -result
        
        return result