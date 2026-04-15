class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int left = 0, right = 0;
        int max_len = 0;

        while (right < nums.size()) {
            if (nums[right] == 0) {
                left = right + 1;
            }
            max_len = max(max_len, right - left + 1);
            right++;
        }

        return max_len;
    }
};