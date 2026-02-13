#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k = 0;
        for(int i = 0 ; i < nums.size(); i++){
            if(nums[i] != val){
                nums[k] = nums[i];
                k = k + 1;
            }
        }
        return k;
    }
};

int main() {
    Solution sol;
    
    vector<int> nums = {0,1,2,2,3,0,4,2};
    int val = 2;

    int k = sol.removeElement(nums, val);

    cout << "New length k = " << k << endl;
    cout << "Modified array (first k elements): ";
    for(int i = 0; i < k; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}