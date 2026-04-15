class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp(n, 0);

        dp[0] = nums[0];
        int max_count = dp[0];

        for (int i = 1; i < n; i++) {
            if (nums[i] == 1)
                dp[i] = dp[i - 1] + 1;
            else
                dp[i] = 0;

            max_count = max(max_count, dp[i]);
        }

        return max_count;
    }
};