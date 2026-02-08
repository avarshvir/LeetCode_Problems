#include<vector>
#include<iostream>
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
         vector<int> result(nums.size());  
        int currentSum = 0;  

        for (int i = 0; i < nums.size(); ++i) {
            currentSum += nums[i];  
            result[i] = currentSum;  
        }

        return result; 
    
    }
};