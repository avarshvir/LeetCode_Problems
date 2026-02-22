#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        for (int i = digits.size() - 1; i >= 0; i--) {
            if (digits[i] < 9) {
                digits[i]++;
                return digits;
            }
            digits[i] = 0;
        }
        digits.insert(digits.begin(), 1);
        return digits;
    }
};

int main() {
    Solution sol;

    vector<vector<int>> testCases = {
        {1, 2, 3},
        {4, 3, 2, 1},
        {9},
        {8, 9, 9, 9}
    };

    for (auto digits : testCases) {
        vector<int> result = sol.plusOne(digits);

        cout << "Input: [";
        for (int i = 0; i < digits.size(); i++) {
            cout << digits[i] << (i < digits.size() - 1 ? "," : "");
        }
        cout << "] → Output: [";
        for (int i = 0; i < result.size(); i++) {
            cout << result[i] << (i < result.size() - 1 ? "," : "");
        }
        cout << "]" << endl;
    }

    return 0;
}