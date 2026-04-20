class Solution:
    def arraySign(self, nums: List[int]) -> int:
        result = 1
        for i in range(len(nums)):
            if nums[i] == 0:
                return 0
            elif nums[i] < 0:
                result = -result
                
        return result