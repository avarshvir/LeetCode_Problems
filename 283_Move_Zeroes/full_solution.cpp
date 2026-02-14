#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int nonZero = 0;  

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0) {
                nums[nonZero] = nums[i];
                nonZero++;
            }
        }

        for (int i = nonZero; i < nums.size(); i++) {
            nums[i] = 0;
        }
    }
};

int main() {
    Solution sol;
    vector<int> nums;

    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements of the array: ";
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        nums.push_back(x);
    }

    sol.moveZeroes(nums);

    cout << "Array after moving zeros: ";
    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}
