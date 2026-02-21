#include <iostream>
#include <vector>
#include <set>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> s;  

        for(int i = 0; i < nums.size(); i++) {
            if(s.find(nums[i]) != s.end()) {
                return true;  
            } else {
                s.insert(nums[i]);  
            }
        }
        return false;  
    }
};

int main() {
    Solution sol;

    vector<int> nums = {1, 2, 3, 1};

    bool result = sol.containsDuplicate(nums);

    if(result) {
        cout << "Duplicate exists" << endl;
    } else {
        cout << "All unique" << endl;
    }

    return 0;
}