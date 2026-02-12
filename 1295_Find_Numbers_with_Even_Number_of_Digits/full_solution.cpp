#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count = 0;
        for(auto i : nums) {
            int digits = 0;
            int num = i;

            while(num > 0) {
                num /= 10;
                digits++;
            }

            if(digits % 2 == 0) {
                count++;
            }
        }
        return count;
    }
};

int main() {
    Solution sol;

    vector<int> nums = {12, 345, 2, 6, 7896};
    int result = sol.findNumbers(nums);

    cout << "Numbers with even digits: " << result << endl;

    return 0;
}
