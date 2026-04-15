#include <stack>

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        stack<int> st;
        int max_count = 0;

        for (int x : nums) {
            if (x == 1) {
                st.push(1);
                max_count = max(max_count, (int)st.size());
            } else {
                while (!st.empty()) st.pop();
            }
        }

        return max_count;
    }
};