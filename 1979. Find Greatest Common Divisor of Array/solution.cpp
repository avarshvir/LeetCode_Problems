class Solution {
public:
    int findGCD(vector<int>& nums){
        int minimum = nums[0];
        int maximum = nums[0];

        for(int i = 1; i < nums.size(); i++){
            if(nums[i] < minimum){
                minimum = nums[i];
            }
            if(nums[i] > maximum){
                maximum = nums[i];
            }
        }

        return __gcd(minimum, maximum);
    }
}