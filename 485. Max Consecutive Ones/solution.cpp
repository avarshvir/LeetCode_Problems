class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int current_count = 0;
        int max_count = 0;

        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == 1){
                current_count++;
                max_count = max(max_count, current_count);
            } else {
                current_count = 0;
            }
        }

        return max_count;
    }
};