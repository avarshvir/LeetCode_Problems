class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);

        int left_sum = 0;
        for(int i = 0; i < n; ++i){
            ans[i] = left_sum;
            left_sum += nums[i];
        }

        int right_sum = 0;
        for(int i = n - 1; i >= 0; i--){
            ans[i] = abs(ans[i] - right_sum);
            right_sum += nums[i];
        }

        return ans;

    }
};