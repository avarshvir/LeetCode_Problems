#include<vector>
#include<iostream>
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
         vector<int> result(nums.size());  // Create a result vector of the same size as nums
        int currentSum = 0;  // Initialize the cumulative sum to 0

        for (int i = 0; i < nums.size(); ++i) {
            currentSum += nums[i];  // Add the current element to the cumulative sum
            result[i] = currentSum;  // Store the cumulative sum in the result vector
        }

        return result;  // Return the result vector containing the running sums
    
    }
};