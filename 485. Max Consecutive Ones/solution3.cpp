class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max_count = 0, count = 0;

        for (int x : nums) {
            if (x == 1) {
                count++;
            } else {
                max_count = max(max_count, count);
                count = 0;
            }
        }

        return max(max_count, count); // last segment check
    }
};