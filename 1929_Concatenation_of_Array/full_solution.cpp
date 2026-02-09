#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> ans;
        for (int i = 0; i < nums.size(); i++) {
            ans.push_back(nums[i]);  
        }

        for (int i = 0; i < nums.size(); i++) {
            ans.push_back(nums[i]);  
        }
        return ans;
    }
};

int main() {
    vector<int> nums = {1, 2, 1};

    Solution sol;

    vector<int> ans = sol.getConcatenation(nums);

    cout << "Concatenated array: ";
    for (int num : ans) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
